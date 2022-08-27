#ifndef __MERKLENODE_H__
#define __MERKLENODE_H__

#include <memory>
#include <string>


class MerkleNode final {
public:
  MerkleNode(const std::string &hex);
  ~MerkleNode();

  auto make_parent_of(const MerkleNode *left, const MerkleNode *right);
  auto hash_from_children();
  auto get_left() -> MerkleNode *;
  auto get_right() -> MerkleNode *;
  auto get_parent() -> MerkleNode *;

private:
  MerkleNode *m_left = nullptr;
  MerkleNode *m_right = nullptr;
  MerkleNode *m_parent = nullptr;

  std::string m_content;
};

#endif // __MERKLENODE_H__