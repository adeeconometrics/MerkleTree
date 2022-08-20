#ifndef __MERKLETREE_H__
#define __MERKLETREE_H__

#include "SHA256.h"
#include <memory>

// Concrete Implementation of Merkle Tree

struct Node final {
    Node *left = nullptr;
    Node *right = nullptr;
    int key {};
    int value{};
};

class MerkleTree final {

public:
    MerkleTree();
    ~MerkleTree();

    auto add_node(const Node* node) -> void;
    auto remove_node(const Node* node) -> void;
    auto find(const std::unique_ptr<Node>& node) -> std::unique_ptr<Node>;

    auto inorder() const noexcept -> void;
    auto preorder() const noexcept -> void;
    auto postorder() const noexcept -> void;

    auto size() const noexcept -> size_t;

private:    
    size_t m_size {};
    Node* head {};

private: 
    auto hash() -> int;
};

#endif // __MERKLETREE_H__