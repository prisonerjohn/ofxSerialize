#pragma once

#include "ofCamera.h"
#include "ofEasyCam.h"
#include "ofJson.h"
#include "ofNode.h"

static nlohmann::json& ofSerialize(nlohmann::json& json, const ofEasyCam& easyCam, const std::string& name = "");
static const nlohmann::json& ofDeserialize(const nlohmann::json& json, ofEasyCam& easyCam, const std::string& name = "");

static nlohmann::json& ofSerialize(nlohmann::json& json, const ofCamera& camera, const std::string& name = "");
static const nlohmann::json& ofDeserialize(const nlohmann::json& json, ofCamera& camera, const std::string& name = "");

static nlohmann::json& ofSerialize(nlohmann::json& json, const ofNode& node, const std::string& name = "");
static const nlohmann::json& ofDeserialize(const nlohmann::json& json, ofNode& node, const std::string& name = "");

static nlohmann::json& ofSerialize(nlohmann::json& json, const glm::mat4& mat, const std::string& name = "");
static const nlohmann::json& ofDeserialize(const nlohmann::json& json, glm::mat4& mat, const std::string& name = "");

#include "ofxSerialize.inl"
