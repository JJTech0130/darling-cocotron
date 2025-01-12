/*
 This file is part of Darling.

 Copyright (C) 2019 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <CoreFoundation/CoreFoundation.h>

const CFStringRef kCTFontFamilyNameKey = CFSTR("CTFontFamilyName");
const CFStringRef kCTFontAttributeName = CFSTR("NSFont");
const CFStringRef kCTFontFamilyNameAttribute = CFSTR("NSFontFamilyAttribute");
const CFStringRef kCTFontNameAttribute = CFSTR("NSFontNameAttribute");
const CFStringRef kCTFontSizeAttribute = CFSTR("NSFontSizeAttribute");
const CFStringRef kCTFontSymbolicTrait = CFSTR("NSCTFontSymbolicTrait");
const CFStringRef kCTFontTraitsAttribute = CFSTR("NSCTFontTraitsAttribute");
const CFStringRef kCTForegroundColorFromContextAttributeName = CFSTR("CTForegroundColorFromContext");
const CFStringRef kCTStrokeWidthAttributeName = CFSTR("NSStrokeWidth");
const CFStringRef kCTForegroundColorAttributeName = CFSTR("CTForegroundColor");
const CFStringRef kCTParagraphStyleAttributeName = CFSTR("NSParagraphStyle");
const CFStringRef kCTFontCascadeListAttribute = CFSTR("CTFontCascadeListAttribute");
const CFStringRef kCTFontFeatureSelectorIdentifierKey = CFSTR("CTFontFeatureSelectorIdentifierKey");
const CFStringRef kCTFontFeatureSettingsAttribute = CFSTR("CTFontFeatureSettingsAttribute");
const CFStringRef kCTFontFeatureTypeIdentifierKey = CFSTR("CTFontFeatureTypeIdentifierKey");
const CFStringRef kCTFontPostScriptNameKey = CFSTR("CTFontPostScriptNameKey");
const CFStringRef kCTFontURLAttribute = CFSTR("CTFontURLAttribute");
const CFStringRef kCTKernAttributeName = CFSTR("CTKernAttributeName");
const CFStringRef kCTLanguageAttributeName = CFSTR("CTLanguageAttributeName");
const CFStringRef kCTTypesetterOptionForcedEmbeddingLevel = CFSTR("CTTypesetterOptionForcedEmbeddingLevel");
const CFStringRef kCTVerticalFormsAttributeName = CFSTR("CTVerticalFormsAttributeName");
const CFStringRef kCTFontFullNameKey = CFSTR("CTFontFullName");
const CFStringRef kCTFontStyleNameKey = CFSTR("CTFontStyleName");
const CFStringRef kCTFontUniqueNameKey = CFSTR("CTFontUniqueName");
const CFStringRef kCTFontVersionNameKey = CFSTR("CTFontVersionName");
const CFStringRef kCTFontFeaturesAttribute = CFSTR("CTFontFeaturesAttribute");
const CFStringRef kCTFontDisplayNameAttribute = CFSTR("NSFontVisibleNameAttribute");
const CFStringRef kCTFontStyleNameAttribute = CFSTR("NSFontFaceAttribute");
const CFStringRef kCTFontVariationAttribute = CFSTR("NSFontVariationAttribute");
const CFStringRef kCTFontMatrixAttribute = CFSTR("NSFontMatrixAttribute");
const CFStringRef kCTFontCharacterSetAttribute = CFSTR("NSFontCharacterSetAttribute");
const CFStringRef kCTFontLanguagesAttribute = CFSTR("NSFontLanguagesAttribute");
const CFStringRef kCTFontBaselineAdjustAttribute = CFSTR("NSFontBaselineAdjustAttribute");
const CFStringRef kCTFontMacintoshEncodingsAttribute = CFSTR("NSFontMacintoshEncodingsAttribute");
const CFStringRef kCTFontFeaturesAttribute = CFSTR("NSFontFeaturesAttribute");
const CFStringRef kCTFontFixedAdvanceAttribute = CFSTR("NSFontFixedAdvanceAttribute");
const CFStringRef kCTFontOrientationAttribute = CFSTR("NSFontOrientationAttribute");
const CFStringRef kCTFontFormatAttribute = CFSTR("NSFontFormatAttribute");
const CFStringRef kCTFontRegistrationScopeAttribute = CFSTR("NSFontRegistrationScopeAttribute");
const CFStringRef kCTFontPriorityAttribute = CFSTR("NSFontPriorityAttribute");
const CFStringRef kCTFontEnabledAttribute = CFSTR("NSFontEnabledAttribute");
const CFStringRef kCTFontWeightTrait = CFSTR("NSCTFontWeightTrait");
const CFStringRef kCTFontWidthTrait = CFSTR("NSCTFontWidthTrait");
const CFStringRef kCTFontSlantTrait = CFSTR("NSCTFontSlantTrait");
