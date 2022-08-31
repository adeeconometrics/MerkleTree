#include "MerkleTree.hpp"
#include "MerkleNode.hpp"
#include "Utilities.hpp"

#include <string>
#include <vector>
#include <iostream>

MerkleTree::MerkleTree(const std::vector<std::string>& leafs) {
   for (auto i : leafs) {
      m_leafs.emplace_back(MerkleNode(i));
    }
    construct();
}

auto MerkleTree::display() -> void {
    MerkleTree::display_subtree(m_root, 0);
}

auto MerkleTree::root() const noexcept -> std::string {
    return m_root->data();
}

auto MerkleTree::levels() const noexcept -> std::vector<std::vector<MerkleNode>> {
    return m_levels;
}

auto MerkleTree::derive_parent(const std::string& lhs, const std::string rhs) -> std::string {
    auto concat = combine(lhs, rhs);
    // reverse(H(H(reverse(rhs)+reverse(lhs))))
    // test
    return to_string(MerkleTree::m_sha256(to_string(MerkleTree::m_sha256(concat))));
}

auto MerkleTree::construct() -> void {
    MerkleNode *left{nullptr};
    MerkleNode *right{nullptr};

    m_levels.push_back(m_leafs);

    for (auto level = &m_levels.at(0); level->size() > 1;
         level = &m_levels.back()) {

      std::vector<MerkleNode> next_level;
      auto it = level->begin();
      while (it != level->end()) {
        left = &(*it);
        if (it + 1 != level->end()) {
          right = &(*(it + 1));
          it += 1;
        } else
          right = left;

        next_level.emplace_back(
            MerkleNode(derive_parent(left->data(), right->data()), left, right));
        it += 1;
      }
      m_levels.push_back(next_level);
    }

    m_root = &m_levels.back().back();
}

auto MerkleTree::display_subtree(MerkleNode* node, size_t level) -> void {
    if (m_root == nullptr) {
      return;
    }
    std::string content;
    content += std::string(level * 2, ' ');
    content += "+ ";

    std::cout << content << node->data() << '\n';
    if (node->left() != nullptr)
      display_subtree(node->left(), level + 1);
    if (node->right() != nullptr && node->right() != node->left())
      display_subtree(node->right(), level + 1);
    return;
}