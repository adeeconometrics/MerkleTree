#ifndef __MERKLENODE_H__
#define __MERKLENODE_H__

#include <memory>
#include <string>

class MerkleNode final {
public:
  MerkleNode(std::string hex);
  MerkleNode(std::string hex, MerkleNode *lhs, MerkleNode *rhs);

  // MerkleNode(const MerkleNode&) = delete;
  // MerkleNode(MerkleNode&&) = delete;
  ~MerkleNode() = default;

  // auto operator=(const MerkleNode&) noexcept -> MerkleNode& = delete;
  // auto operator=(MerkleNode&&) noexcept -> MerkleNode& = delete;

  auto data() const noexcept -> std::string;
  auto left() const noexcept -> MerkleNode *;
  auto right() const noexcept -> MerkleNode *;
  auto parent() const noexcept -> MerkleNode *;

private:
  std::string m_data;
  
  MerkleNode *m_left = nullptr;
  MerkleNode *m_right = nullptr;
  MerkleNode *m_parent = nullptr;

};

#endif // __MERKLENODE_H__