#pragma once

#include "ofCamera.h"
#include "ofEasyCam.h"
#include "ofJson.h"
#include "ofNode.h"

static nlohmann::json & ofSerialize(nlohmann::json & json, const ofEasyCam & easyCam, const string & name = "");
static const nlohmann::json & ofDeserialize(const nlohmann::json & json, ofEasyCam & easyCam, const string & name = "");

static nlohmann::json & ofSerialize(nlohmann::json & json, const ofCamera & camera, const string & name = "");
static const nlohmann::json & ofDeserialize(const nlohmann::json & json, ofCamera & camera, const string & name = "");

static nlohmann::json & ofSerialize(nlohmann::json & json, const ofNode & node, const string & name = "");
static const nlohmann::json & ofDeserialize(const nlohmann::json & json, ofNode & node, const string & name = "");

#include "ofxSerialize.inl"