
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IANAifType_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace IANAifType_MIB {

const Enum::YLeaf IANAtunnelType::other {1, "other"};
const Enum::YLeaf IANAtunnelType::direct {2, "direct"};
const Enum::YLeaf IANAtunnelType::gre {3, "gre"};
const Enum::YLeaf IANAtunnelType::minimal {4, "minimal"};
const Enum::YLeaf IANAtunnelType::l2tp {5, "l2tp"};
const Enum::YLeaf IANAtunnelType::pptp {6, "pptp"};
const Enum::YLeaf IANAtunnelType::l2f {7, "l2f"};
const Enum::YLeaf IANAtunnelType::udp {8, "udp"};
const Enum::YLeaf IANAtunnelType::atmp {9, "atmp"};
const Enum::YLeaf IANAtunnelType::msdp {10, "msdp"};
const Enum::YLeaf IANAtunnelType::sixToFour {11, "sixToFour"};
const Enum::YLeaf IANAtunnelType::sixOverFour {12, "sixOverFour"};
const Enum::YLeaf IANAtunnelType::isatap {13, "isatap"};
const Enum::YLeaf IANAtunnelType::teredo {14, "teredo"};

const Enum::YLeaf IANAifType::other {1, "other"};
const Enum::YLeaf IANAifType::regular1822 {2, "regular1822"};
const Enum::YLeaf IANAifType::hdh1822 {3, "hdh1822"};
const Enum::YLeaf IANAifType::ddnX25 {4, "ddnX25"};
const Enum::YLeaf IANAifType::rfc877x25 {5, "rfc877x25"};
const Enum::YLeaf IANAifType::ethernetCsmacd {6, "ethernetCsmacd"};
const Enum::YLeaf IANAifType::iso88023Csmacd {7, "iso88023Csmacd"};
const Enum::YLeaf IANAifType::iso88024TokenBus {8, "iso88024TokenBus"};
const Enum::YLeaf IANAifType::iso88025TokenRing {9, "iso88025TokenRing"};
const Enum::YLeaf IANAifType::iso88026Man {10, "iso88026Man"};
const Enum::YLeaf IANAifType::starLan {11, "starLan"};
const Enum::YLeaf IANAifType::proteon10Mbit {12, "proteon10Mbit"};
const Enum::YLeaf IANAifType::proteon80Mbit {13, "proteon80Mbit"};
const Enum::YLeaf IANAifType::hyperchannel {14, "hyperchannel"};
const Enum::YLeaf IANAifType::fddi {15, "fddi"};
const Enum::YLeaf IANAifType::lapb {16, "lapb"};
const Enum::YLeaf IANAifType::sdlc {17, "sdlc"};
const Enum::YLeaf IANAifType::ds1 {18, "ds1"};
const Enum::YLeaf IANAifType::e1 {19, "e1"};
const Enum::YLeaf IANAifType::basicISDN {20, "basicISDN"};
const Enum::YLeaf IANAifType::primaryISDN {21, "primaryISDN"};
const Enum::YLeaf IANAifType::propPointToPointSerial {22, "propPointToPointSerial"};
const Enum::YLeaf IANAifType::ppp {23, "ppp"};
const Enum::YLeaf IANAifType::softwareLoopback {24, "softwareLoopback"};
const Enum::YLeaf IANAifType::eon {25, "eon"};
const Enum::YLeaf IANAifType::ethernet3Mbit {26, "ethernet3Mbit"};
const Enum::YLeaf IANAifType::nsip {27, "nsip"};
const Enum::YLeaf IANAifType::slip {28, "slip"};
const Enum::YLeaf IANAifType::ultra {29, "ultra"};
const Enum::YLeaf IANAifType::ds3 {30, "ds3"};
const Enum::YLeaf IANAifType::sip {31, "sip"};
const Enum::YLeaf IANAifType::frameRelay {32, "frameRelay"};
const Enum::YLeaf IANAifType::rs232 {33, "rs232"};
const Enum::YLeaf IANAifType::para {34, "para"};
const Enum::YLeaf IANAifType::arcnet {35, "arcnet"};
const Enum::YLeaf IANAifType::arcnetPlus {36, "arcnetPlus"};
const Enum::YLeaf IANAifType::atm {37, "atm"};
const Enum::YLeaf IANAifType::miox25 {38, "miox25"};
const Enum::YLeaf IANAifType::sonet {39, "sonet"};
const Enum::YLeaf IANAifType::x25ple {40, "x25ple"};
const Enum::YLeaf IANAifType::iso88022llc {41, "iso88022llc"};
const Enum::YLeaf IANAifType::localTalk {42, "localTalk"};
const Enum::YLeaf IANAifType::smdsDxi {43, "smdsDxi"};
const Enum::YLeaf IANAifType::frameRelayService {44, "frameRelayService"};
const Enum::YLeaf IANAifType::v35 {45, "v35"};
const Enum::YLeaf IANAifType::hssi {46, "hssi"};
const Enum::YLeaf IANAifType::hippi {47, "hippi"};
const Enum::YLeaf IANAifType::modem {48, "modem"};
const Enum::YLeaf IANAifType::aal5 {49, "aal5"};
const Enum::YLeaf IANAifType::sonetPath {50, "sonetPath"};
const Enum::YLeaf IANAifType::sonetVT {51, "sonetVT"};
const Enum::YLeaf IANAifType::smdsIcip {52, "smdsIcip"};
const Enum::YLeaf IANAifType::propVirtual {53, "propVirtual"};
const Enum::YLeaf IANAifType::propMultiplexor {54, "propMultiplexor"};
const Enum::YLeaf IANAifType::ieee80212 {55, "ieee80212"};
const Enum::YLeaf IANAifType::fibreChannel {56, "fibreChannel"};
const Enum::YLeaf IANAifType::hippiInterface {57, "hippiInterface"};
const Enum::YLeaf IANAifType::frameRelayInterconnect {58, "frameRelayInterconnect"};
const Enum::YLeaf IANAifType::aflane8023 {59, "aflane8023"};
const Enum::YLeaf IANAifType::aflane8025 {60, "aflane8025"};
const Enum::YLeaf IANAifType::cctEmul {61, "cctEmul"};
const Enum::YLeaf IANAifType::fastEther {62, "fastEther"};
const Enum::YLeaf IANAifType::isdn {63, "isdn"};
const Enum::YLeaf IANAifType::v11 {64, "v11"};
const Enum::YLeaf IANAifType::v36 {65, "v36"};
const Enum::YLeaf IANAifType::g703at64k {66, "g703at64k"};
const Enum::YLeaf IANAifType::g703at2mb {67, "g703at2mb"};
const Enum::YLeaf IANAifType::qllc {68, "qllc"};
const Enum::YLeaf IANAifType::fastEtherFX {69, "fastEtherFX"};
const Enum::YLeaf IANAifType::channel {70, "channel"};
const Enum::YLeaf IANAifType::ieee80211 {71, "ieee80211"};
const Enum::YLeaf IANAifType::ibm370parChan {72, "ibm370parChan"};
const Enum::YLeaf IANAifType::escon {73, "escon"};
const Enum::YLeaf IANAifType::dlsw {74, "dlsw"};
const Enum::YLeaf IANAifType::isdns {75, "isdns"};
const Enum::YLeaf IANAifType::isdnu {76, "isdnu"};
const Enum::YLeaf IANAifType::lapd {77, "lapd"};
const Enum::YLeaf IANAifType::ipSwitch {78, "ipSwitch"};
const Enum::YLeaf IANAifType::rsrb {79, "rsrb"};
const Enum::YLeaf IANAifType::atmLogical {80, "atmLogical"};
const Enum::YLeaf IANAifType::ds0 {81, "ds0"};
const Enum::YLeaf IANAifType::ds0Bundle {82, "ds0Bundle"};
const Enum::YLeaf IANAifType::bsc {83, "bsc"};
const Enum::YLeaf IANAifType::async {84, "async"};
const Enum::YLeaf IANAifType::cnr {85, "cnr"};
const Enum::YLeaf IANAifType::iso88025Dtr {86, "iso88025Dtr"};
const Enum::YLeaf IANAifType::eplrs {87, "eplrs"};
const Enum::YLeaf IANAifType::arap {88, "arap"};
const Enum::YLeaf IANAifType::propCnls {89, "propCnls"};
const Enum::YLeaf IANAifType::hostPad {90, "hostPad"};
const Enum::YLeaf IANAifType::termPad {91, "termPad"};
const Enum::YLeaf IANAifType::frameRelayMPI {92, "frameRelayMPI"};
const Enum::YLeaf IANAifType::x213 {93, "x213"};
const Enum::YLeaf IANAifType::adsl {94, "adsl"};
const Enum::YLeaf IANAifType::radsl {95, "radsl"};
const Enum::YLeaf IANAifType::sdsl {96, "sdsl"};
const Enum::YLeaf IANAifType::vdsl {97, "vdsl"};
const Enum::YLeaf IANAifType::iso88025CRFPInt {98, "iso88025CRFPInt"};
const Enum::YLeaf IANAifType::myrinet {99, "myrinet"};
const Enum::YLeaf IANAifType::voiceEM {100, "voiceEM"};
const Enum::YLeaf IANAifType::voiceFXO {101, "voiceFXO"};
const Enum::YLeaf IANAifType::voiceFXS {102, "voiceFXS"};
const Enum::YLeaf IANAifType::voiceEncap {103, "voiceEncap"};
const Enum::YLeaf IANAifType::voiceOverIp {104, "voiceOverIp"};
const Enum::YLeaf IANAifType::atmDxi {105, "atmDxi"};
const Enum::YLeaf IANAifType::atmFuni {106, "atmFuni"};
const Enum::YLeaf IANAifType::atmIma {107, "atmIma"};
const Enum::YLeaf IANAifType::pppMultilinkBundle {108, "pppMultilinkBundle"};
const Enum::YLeaf IANAifType::ipOverCdlc {109, "ipOverCdlc"};
const Enum::YLeaf IANAifType::ipOverClaw {110, "ipOverClaw"};
const Enum::YLeaf IANAifType::stackToStack {111, "stackToStack"};
const Enum::YLeaf IANAifType::virtualIpAddress {112, "virtualIpAddress"};
const Enum::YLeaf IANAifType::mpc {113, "mpc"};
const Enum::YLeaf IANAifType::ipOverAtm {114, "ipOverAtm"};
const Enum::YLeaf IANAifType::iso88025Fiber {115, "iso88025Fiber"};
const Enum::YLeaf IANAifType::tdlc {116, "tdlc"};
const Enum::YLeaf IANAifType::gigabitEthernet {117, "gigabitEthernet"};
const Enum::YLeaf IANAifType::hdlc {118, "hdlc"};
const Enum::YLeaf IANAifType::lapf {119, "lapf"};
const Enum::YLeaf IANAifType::v37 {120, "v37"};
const Enum::YLeaf IANAifType::x25mlp {121, "x25mlp"};
const Enum::YLeaf IANAifType::x25huntGroup {122, "x25huntGroup"};
const Enum::YLeaf IANAifType::trasnpHdlc {123, "trasnpHdlc"};
const Enum::YLeaf IANAifType::interleave {124, "interleave"};
const Enum::YLeaf IANAifType::fast {125, "fast"};
const Enum::YLeaf IANAifType::ip {126, "ip"};
const Enum::YLeaf IANAifType::docsCableMaclayer {127, "docsCableMaclayer"};
const Enum::YLeaf IANAifType::docsCableDownstream {128, "docsCableDownstream"};
const Enum::YLeaf IANAifType::docsCableUpstream {129, "docsCableUpstream"};
const Enum::YLeaf IANAifType::a12MppSwitch {130, "a12MppSwitch"};
const Enum::YLeaf IANAifType::tunnel {131, "tunnel"};
const Enum::YLeaf IANAifType::coffee {132, "coffee"};
const Enum::YLeaf IANAifType::ces {133, "ces"};
const Enum::YLeaf IANAifType::atmSubInterface {134, "atmSubInterface"};
const Enum::YLeaf IANAifType::l2vlan {135, "l2vlan"};
const Enum::YLeaf IANAifType::l3ipvlan {136, "l3ipvlan"};
const Enum::YLeaf IANAifType::l3ipxvlan {137, "l3ipxvlan"};
const Enum::YLeaf IANAifType::digitalPowerline {138, "digitalPowerline"};
const Enum::YLeaf IANAifType::mediaMailOverIp {139, "mediaMailOverIp"};
const Enum::YLeaf IANAifType::dtm {140, "dtm"};
const Enum::YLeaf IANAifType::dcn {141, "dcn"};
const Enum::YLeaf IANAifType::ipForward {142, "ipForward"};
const Enum::YLeaf IANAifType::msdsl {143, "msdsl"};
const Enum::YLeaf IANAifType::ieee1394 {144, "ieee1394"};
const Enum::YLeaf IANAifType::if_gsn {145, "if-gsn"};
const Enum::YLeaf IANAifType::dvbRccMacLayer {146, "dvbRccMacLayer"};
const Enum::YLeaf IANAifType::dvbRccDownstream {147, "dvbRccDownstream"};
const Enum::YLeaf IANAifType::dvbRccUpstream {148, "dvbRccUpstream"};
const Enum::YLeaf IANAifType::atmVirtual {149, "atmVirtual"};
const Enum::YLeaf IANAifType::mplsTunnel {150, "mplsTunnel"};
const Enum::YLeaf IANAifType::srp {151, "srp"};
const Enum::YLeaf IANAifType::voiceOverAtm {152, "voiceOverAtm"};
const Enum::YLeaf IANAifType::voiceOverFrameRelay {153, "voiceOverFrameRelay"};
const Enum::YLeaf IANAifType::idsl {154, "idsl"};
const Enum::YLeaf IANAifType::compositeLink {155, "compositeLink"};
const Enum::YLeaf IANAifType::ss7SigLink {156, "ss7SigLink"};
const Enum::YLeaf IANAifType::propWirelessP2P {157, "propWirelessP2P"};
const Enum::YLeaf IANAifType::frForward {158, "frForward"};
const Enum::YLeaf IANAifType::rfc1483 {159, "rfc1483"};
const Enum::YLeaf IANAifType::usb {160, "usb"};
const Enum::YLeaf IANAifType::ieee8023adLag {161, "ieee8023adLag"};
const Enum::YLeaf IANAifType::bgppolicyaccounting {162, "bgppolicyaccounting"};
const Enum::YLeaf IANAifType::frf16MfrBundle {163, "frf16MfrBundle"};
const Enum::YLeaf IANAifType::h323Gatekeeper {164, "h323Gatekeeper"};
const Enum::YLeaf IANAifType::h323Proxy {165, "h323Proxy"};
const Enum::YLeaf IANAifType::mpls {166, "mpls"};
const Enum::YLeaf IANAifType::mfSigLink {167, "mfSigLink"};
const Enum::YLeaf IANAifType::hdsl2 {168, "hdsl2"};
const Enum::YLeaf IANAifType::shdsl {169, "shdsl"};
const Enum::YLeaf IANAifType::ds1FDL {170, "ds1FDL"};
const Enum::YLeaf IANAifType::pos {171, "pos"};
const Enum::YLeaf IANAifType::dvbAsiIn {172, "dvbAsiIn"};
const Enum::YLeaf IANAifType::dvbAsiOut {173, "dvbAsiOut"};
const Enum::YLeaf IANAifType::plc {174, "plc"};
const Enum::YLeaf IANAifType::nfas {175, "nfas"};
const Enum::YLeaf IANAifType::tr008 {176, "tr008"};
const Enum::YLeaf IANAifType::gr303RDT {177, "gr303RDT"};
const Enum::YLeaf IANAifType::gr303IDT {178, "gr303IDT"};
const Enum::YLeaf IANAifType::isup {179, "isup"};
const Enum::YLeaf IANAifType::propDocsWirelessMaclayer {180, "propDocsWirelessMaclayer"};
const Enum::YLeaf IANAifType::propDocsWirelessDownstream {181, "propDocsWirelessDownstream"};
const Enum::YLeaf IANAifType::propDocsWirelessUpstream {182, "propDocsWirelessUpstream"};
const Enum::YLeaf IANAifType::hiperlan2 {183, "hiperlan2"};
const Enum::YLeaf IANAifType::propBWAp2Mp {184, "propBWAp2Mp"};
const Enum::YLeaf IANAifType::sonetOverheadChannel {185, "sonetOverheadChannel"};
const Enum::YLeaf IANAifType::digitalWrapperOverheadChannel {186, "digitalWrapperOverheadChannel"};
const Enum::YLeaf IANAifType::aal2 {187, "aal2"};
const Enum::YLeaf IANAifType::radioMAC {188, "radioMAC"};
const Enum::YLeaf IANAifType::atmRadio {189, "atmRadio"};
const Enum::YLeaf IANAifType::imt {190, "imt"};
const Enum::YLeaf IANAifType::mvl {191, "mvl"};
const Enum::YLeaf IANAifType::reachDSL {192, "reachDSL"};
const Enum::YLeaf IANAifType::frDlciEndPt {193, "frDlciEndPt"};
const Enum::YLeaf IANAifType::atmVciEndPt {194, "atmVciEndPt"};
const Enum::YLeaf IANAifType::opticalChannel {195, "opticalChannel"};
const Enum::YLeaf IANAifType::opticalTransport {196, "opticalTransport"};
const Enum::YLeaf IANAifType::propAtm {197, "propAtm"};
const Enum::YLeaf IANAifType::voiceOverCable {198, "voiceOverCable"};
const Enum::YLeaf IANAifType::infiniband {199, "infiniband"};
const Enum::YLeaf IANAifType::teLink {200, "teLink"};
const Enum::YLeaf IANAifType::q2931 {201, "q2931"};
const Enum::YLeaf IANAifType::virtualTg {202, "virtualTg"};
const Enum::YLeaf IANAifType::sipTg {203, "sipTg"};
const Enum::YLeaf IANAifType::sipSig {204, "sipSig"};
const Enum::YLeaf IANAifType::docsCableUpstreamChannel {205, "docsCableUpstreamChannel"};
const Enum::YLeaf IANAifType::econet {206, "econet"};
const Enum::YLeaf IANAifType::pon155 {207, "pon155"};
const Enum::YLeaf IANAifType::pon622 {208, "pon622"};
const Enum::YLeaf IANAifType::bridge {209, "bridge"};
const Enum::YLeaf IANAifType::linegroup {210, "linegroup"};
const Enum::YLeaf IANAifType::voiceEMFGD {211, "voiceEMFGD"};
const Enum::YLeaf IANAifType::voiceFGDEANA {212, "voiceFGDEANA"};
const Enum::YLeaf IANAifType::voiceDID {213, "voiceDID"};
const Enum::YLeaf IANAifType::mpegTransport {214, "mpegTransport"};
const Enum::YLeaf IANAifType::sixToFour {215, "sixToFour"};
const Enum::YLeaf IANAifType::gtp {216, "gtp"};
const Enum::YLeaf IANAifType::pdnEtherLoop1 {217, "pdnEtherLoop1"};
const Enum::YLeaf IANAifType::pdnEtherLoop2 {218, "pdnEtherLoop2"};
const Enum::YLeaf IANAifType::opticalChannelGroup {219, "opticalChannelGroup"};
const Enum::YLeaf IANAifType::homepna {220, "homepna"};
const Enum::YLeaf IANAifType::gfp {221, "gfp"};
const Enum::YLeaf IANAifType::ciscoISLvlan {222, "ciscoISLvlan"};
const Enum::YLeaf IANAifType::actelisMetaLOOP {223, "actelisMetaLOOP"};
const Enum::YLeaf IANAifType::fcipLink {224, "fcipLink"};
const Enum::YLeaf IANAifType::rpr {225, "rpr"};
const Enum::YLeaf IANAifType::qam {226, "qam"};
const Enum::YLeaf IANAifType::lmp {227, "lmp"};
const Enum::YLeaf IANAifType::cblVectaStar {228, "cblVectaStar"};
const Enum::YLeaf IANAifType::docsCableMCmtsDownstream {229, "docsCableMCmtsDownstream"};
const Enum::YLeaf IANAifType::adsl2 {230, "adsl2"};
const Enum::YLeaf IANAifType::macSecControlledIF {231, "macSecControlledIF"};
const Enum::YLeaf IANAifType::macSecUncontrolledIF {232, "macSecUncontrolledIF"};
const Enum::YLeaf IANAifType::aviciOpticalEther {233, "aviciOpticalEther"};
const Enum::YLeaf IANAifType::atmbond {234, "atmbond"};
const Enum::YLeaf IANAifType::voiceFGDOS {235, "voiceFGDOS"};
const Enum::YLeaf IANAifType::mocaVersion1 {236, "mocaVersion1"};
const Enum::YLeaf IANAifType::ieee80216WMAN {237, "ieee80216WMAN"};
const Enum::YLeaf IANAifType::adsl2plus {238, "adsl2plus"};
const Enum::YLeaf IANAifType::dvbRcsMacLayer {239, "dvbRcsMacLayer"};
const Enum::YLeaf IANAifType::dvbTdm {240, "dvbTdm"};
const Enum::YLeaf IANAifType::dvbRcsTdma {241, "dvbRcsTdma"};
const Enum::YLeaf IANAifType::x86Laps {242, "x86Laps"};
const Enum::YLeaf IANAifType::wwanPP {243, "wwanPP"};
const Enum::YLeaf IANAifType::wwanPP2 {244, "wwanPP2"};
const Enum::YLeaf IANAifType::voiceEBS {245, "voiceEBS"};
const Enum::YLeaf IANAifType::ifPwType {246, "ifPwType"};
const Enum::YLeaf IANAifType::ilan {247, "ilan"};
const Enum::YLeaf IANAifType::pip {248, "pip"};
const Enum::YLeaf IANAifType::aluELP {249, "aluELP"};
const Enum::YLeaf IANAifType::gpon {250, "gpon"};
const Enum::YLeaf IANAifType::vdsl2 {251, "vdsl2"};
const Enum::YLeaf IANAifType::capwapDot11Profile {252, "capwapDot11Profile"};
const Enum::YLeaf IANAifType::capwapDot11Bss {253, "capwapDot11Bss"};
const Enum::YLeaf IANAifType::capwapWtpVirtualRadio {254, "capwapWtpVirtualRadio"};
const Enum::YLeaf IANAifType::bits {255, "bits"};
const Enum::YLeaf IANAifType::docsCableUpstreamRfPort {256, "docsCableUpstreamRfPort"};
const Enum::YLeaf IANAifType::cableDownstreamRfPort {257, "cableDownstreamRfPort"};
const Enum::YLeaf IANAifType::vmwareVirtualNic {258, "vmwareVirtualNic"};
const Enum::YLeaf IANAifType::ieee802154 {259, "ieee802154"};
const Enum::YLeaf IANAifType::otnOdu {260, "otnOdu"};
const Enum::YLeaf IANAifType::otnOtu {261, "otnOtu"};
const Enum::YLeaf IANAifType::ifVfiType {262, "ifVfiType"};
const Enum::YLeaf IANAifType::g9981 {263, "g9981"};
const Enum::YLeaf IANAifType::g9982 {264, "g9982"};
const Enum::YLeaf IANAifType::g9983 {265, "g9983"};
const Enum::YLeaf IANAifType::aluEpon {266, "aluEpon"};
const Enum::YLeaf IANAifType::aluEponOnu {267, "aluEponOnu"};
const Enum::YLeaf IANAifType::aluEponPhysicalUni {268, "aluEponPhysicalUni"};
const Enum::YLeaf IANAifType::aluEponLogicalLink {269, "aluEponLogicalLink"};
const Enum::YLeaf IANAifType::aluGponOnu {270, "aluGponOnu"};
const Enum::YLeaf IANAifType::aluGponPhysicalUni {271, "aluGponPhysicalUni"};
const Enum::YLeaf IANAifType::vmwareNicTeam {272, "vmwareNicTeam"};
const Enum::YLeaf IANAifType::docsOfdmDownstream {277, "docsOfdmDownstream"};
const Enum::YLeaf IANAifType::docsOfdmaUpstream {278, "docsOfdmaUpstream"};
const Enum::YLeaf IANAifType::gfast {279, "gfast"};
const Enum::YLeaf IANAifType::sdci {280, "sdci"};
const Enum::YLeaf IANAifType::xboxWireless {281, "xboxWireless"};
const Enum::YLeaf IANAifType::fastdsl {282, "fastdsl"};
const Enum::YLeaf IANAifType::docsCableScte55d1FwdOob {283, "docsCableScte55d1FwdOob"};
const Enum::YLeaf IANAifType::docsCableScte55d1RetOob {284, "docsCableScte55d1RetOob"};
const Enum::YLeaf IANAifType::docsCableScte55d2DsOob {285, "docsCableScte55d2DsOob"};
const Enum::YLeaf IANAifType::docsCableScte55d2UsOob {286, "docsCableScte55d2UsOob"};
const Enum::YLeaf IANAifType::docsCableNdf {287, "docsCableNdf"};
const Enum::YLeaf IANAifType::docsCableNdr {288, "docsCableNdr"};


}
}

