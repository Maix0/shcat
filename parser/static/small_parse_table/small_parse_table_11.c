/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_11.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_55(t_small_parse_table_array *v)
{
	v->a[1100] = sym_expansion;
	v->a[1101] = sym_command_substitution;
	v->a[1102] = actions(757);
	v->a[1103] = 21;
	v->a[1104] = anon_sym_PIPE;
	v->a[1105] = anon_sym_SEMI_SEMI;
	v->a[1106] = anon_sym_SEMI_AMP;
	v->a[1107] = anon_sym_SEMI_SEMI_AMP;
	v->a[1108] = anon_sym_PIPE_AMP;
	v->a[1109] = anon_sym_AMP_AMP;
	v->a[1110] = anon_sym_PIPE_PIPE;
	v->a[1111] = anon_sym_LT;
	v->a[1112] = anon_sym_GT;
	v->a[1113] = anon_sym_GT_GT;
	v->a[1114] = anon_sym_AMP_GT;
	v->a[1115] = anon_sym_AMP_GT_GT;
	v->a[1116] = anon_sym_LT_AMP;
	v->a[1117] = anon_sym_GT_AMP;
	v->a[1118] = anon_sym_GT_PIPE;
	v->a[1119] = anon_sym_LT_AMP_DASH;
	small_parse_table_56(v);
}

void	small_parse_table_56(t_small_parse_table_array *v)
{
	v->a[1120] = anon_sym_GT_AMP_DASH;
	v->a[1121] = anon_sym_LT_LT;
	v->a[1122] = anon_sym_LT_LT_DASH;
	v->a[1123] = anon_sym_AMP;
	v->a[1124] = anon_sym_SEMI;
	v->a[1125] = 6;
	v->a[1126] = actions(3);
	v->a[1127] = 1;
	v->a[1128] = sym_comment;
	v->a[1129] = actions(840);
	v->a[1130] = 1;
	v->a[1131] = sym_variable_name;
	v->a[1132] = actions(838);
	v->a[1133] = 2;
	v->a[1134] = aux_sym__simple_variable_name_token1;
	v->a[1135] = aux_sym__multiline_variable_name_token1;
	v->a[1136] = actions(816);
	v->a[1137] = 4;
	v->a[1138] = sym_file_descriptor;
	v->a[1139] = sym_test_operator;
	small_parse_table_57(v);
}

void	small_parse_table_57(t_small_parse_table_array *v)
{
	v->a[1140] = sym__bare_dollar;
	v->a[1141] = sym__brace_start;
	v->a[1142] = actions(836);
	v->a[1143] = 9;
	v->a[1144] = anon_sym_BANG;
	v->a[1145] = anon_sym_DASH;
	v->a[1146] = anon_sym_STAR;
	v->a[1147] = anon_sym_QMARK;
	v->a[1148] = anon_sym_DOLLAR;
	v->a[1149] = anon_sym_POUND;
	v->a[1150] = anon_sym_AT;
	v->a[1151] = anon_sym_0;
	v->a[1152] = anon_sym__;
	v->a[1153] = actions(810);
	v->a[1154] = 34;
	v->a[1155] = anon_sym_esac;
	v->a[1156] = anon_sym_PIPE;
	v->a[1157] = anon_sym_SEMI_SEMI;
	v->a[1158] = anon_sym_SEMI_AMP;
	v->a[1159] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_58(v);
}

void	small_parse_table_58(t_small_parse_table_array *v)
{
	v->a[1160] = anon_sym_PIPE_AMP;
	v->a[1161] = anon_sym_AMP_AMP;
	v->a[1162] = anon_sym_PIPE_PIPE;
	v->a[1163] = anon_sym_LT;
	v->a[1164] = anon_sym_GT;
	v->a[1165] = anon_sym_GT_GT;
	v->a[1166] = anon_sym_AMP_GT;
	v->a[1167] = anon_sym_AMP_GT_GT;
	v->a[1168] = anon_sym_LT_AMP;
	v->a[1169] = anon_sym_GT_AMP;
	v->a[1170] = anon_sym_GT_PIPE;
	v->a[1171] = anon_sym_LT_AMP_DASH;
	v->a[1172] = anon_sym_GT_AMP_DASH;
	v->a[1173] = anon_sym_LT_LT;
	v->a[1174] = anon_sym_LT_LT_DASH;
	v->a[1175] = aux_sym_heredoc_redirect_token1;
	v->a[1176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1177] = anon_sym_AMP;
	v->a[1178] = sym__special_character;
	v->a[1179] = anon_sym_DQUOTE;
	small_parse_table_59(v);
}

void	small_parse_table_59(t_small_parse_table_array *v)
{
	v->a[1180] = sym_raw_string;
	v->a[1181] = aux_sym_number_token1;
	v->a[1182] = aux_sym_number_token2;
	v->a[1183] = anon_sym_DOLLAR_LBRACE;
	v->a[1184] = anon_sym_DOLLAR_LPAREN;
	v->a[1185] = anon_sym_BQUOTE;
	v->a[1186] = anon_sym_DOLLAR_BQUOTE;
	v->a[1187] = sym_word;
	v->a[1188] = anon_sym_SEMI;
	v->a[1189] = 6;
	v->a[1190] = actions(3);
	v->a[1191] = 1;
	v->a[1192] = sym_comment;
	v->a[1193] = actions(834);
	v->a[1194] = 1;
	v->a[1195] = sym_variable_name;
	v->a[1196] = actions(832);
	v->a[1197] = 2;
	v->a[1198] = aux_sym__simple_variable_name_token1;
	v->a[1199] = aux_sym__multiline_variable_name_token1;
	small_parse_table_60(v);
}

/* EOF small_parse_table_11.c */
