#ifndef __MERKLETREE_H__
#define __MERKLETREE_H__

#include "MerkleNode.hpp"
#include "SHA256.hpp"


#include <memory>
#include <string>
#include <vector>


// Concrete Implementation of Merkle Tree

class MerkleTree final {
public:
  typedef std::vector<MerkleNode> MerkleTreeLevel;

public:
  MerkleTree();
  ~MerkleTree();

  auto add_node(const MerkleNode *node) -> void;
  auto remove_node(const MerkleNode *node) -> void;
  auto find(const std::unique_ptr<MerkleNode> &node)
      -> std::unique_ptr<MerkleNode>;

  auto
  construct_network_ordered_hex_seeds(const std::vector<std::string> &leaves)
      -> void;
  auto compute_subtree(std::unique_ptr<MerkleNode> &node) -> void;

  auto display() const noexcept -> void;

  auto size() const noexcept -> size_t;
  auto is_element(const std::unique_ptr<MerkleNode> &node) const noexcept
      -> bool;

private:
  std::vector<MerkleNode> m_leafs;
  std::vector<MerkleTreeLevel> m_tree_levels;

  MerkleNode *m_head{nullptr};
  MerkleNode *m_root{nullptr};

  size_t m_size{};

private:
  auto hash() -> int;
};

#endif // __MERKLETREE_H__