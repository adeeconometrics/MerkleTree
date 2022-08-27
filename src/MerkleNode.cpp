#include "MerkleNode.hpp"

#include <string>

MerkleNode::MerkleNode(std::string hex):
    m_data(std::move(hex)){}

MerkleNode::MerkleNode(std::string hex, MerkleNode* lhs, MerkleNode* rhs):
    m_data(std::move(hex)), m_left(lhs), m_right(rhs){
        lhs->m_parent = this;
        rhs->m_parent = this;
}

auto MerkleNode::data() const noexcept -> std::string {
    return m_data;
}

auto MerkleNode::left() const noexcept -> MerkleNode * {
    return m_left;
}

auto MerkleNode::right() const noexcept -> MerkleNode * {
    return m_right;
}

auto MerkleNode::parent() const noexcept -> MerkleNode * {
    return m_parent;
}