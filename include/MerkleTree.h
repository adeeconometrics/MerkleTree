#ifndef __MERKLETREE_H__
#define __MERKLETREE_H__

#include <functional>
#include <memory>

// Concrete Implementation of Merkle Tree

// struct Node final {
//     Node *left = nullptr;
//     Node *right = nullptr;
//     int key {};
//     int value{};
// };

// class MerkleTree final {

// public:
//     MerkleTree();
//     ~MerkleTree();

//     auto add_node(const Node* node) -> void;
//     auto remove_node(const Node* node) -> void;

//     auto inorder() const noexcept -> void;
//     auto preorder() const noexcept -> void;
//     auto postorder() const noexcept -> void;

//     auto is_element(const Node* node) const noexcept -> bool;

//     auto size() const noexcept -> size_t;

// private:    
//     size_t m_size {};
//     Node* head {};

// private: 
//     auto hash() -> int;
// };

#endif // __MERKLETREE_H__