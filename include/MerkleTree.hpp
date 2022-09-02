#ifndef __MERKLETREE_H__
#define __MERKLETREE_H__

#include "MerkleNode.hpp"
#include "SHA256.hpp"

#include <string>
#include <vector>

// Concrete Implementation of Merkle Tree

class MerkleTree final {
public:
  MerkleTree(const std::vector<std::string> &leafs);
  ~MerkleTree() = default;

  auto display() -> void;

  auto root() const noexcept -> std::string;
  auto levels() const noexcept -> std::vector<std::vector<MerkleNode>>;
  auto derive_parent(const std::string &lhs, const std::string rhs)
      -> std::string;

private:
  auto construct() -> void;
  auto display_subtree(MerkleNode *node, size_t level) -> void;

private:
  std::vector<MerkleNode> m_leafs;
  std::vector<std::vector<MerkleNode>> m_levels;

  SHA256 m_sha256;
  MerkleNode *m_root{nullptr};
};
#endif // __MERKLETREE_H__