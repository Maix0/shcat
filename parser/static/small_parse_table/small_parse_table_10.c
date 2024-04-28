/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_10.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_50(t_small_parse_table_array *v)
{
	v->a[1000] = 1;
	v->a[1001] = sym_herestring_redirect;
	v->a[1002] = state(1716);
	v->a[1003] = 1;
	v->a[1004] = sym_concatenation;
	v->a[1005] = state(4952);
	v->a[1006] = 1;
	v->a[1007] = sym_subshell;
	v->a[1008] = actions(1442);
	v->a[1009] = 2;
	v->a[1010] = sym_file_descriptor;
	v->a[1011] = aux_sym_heredoc_redirect_token1;
	v->a[1012] = actions(1543);
	v->a[1013] = 2;
	v->a[1014] = anon_sym_LPAREN_LPAREN;
	v->a[1015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1016] = actions(1545);
	v->a[1017] = 2;
	v->a[1018] = anon_sym_EQ_EQ;
	v->a[1019] = anon_sym_EQ_TILDE;
	small_parse_table_51(v);
}

void	small_parse_table_51(t_small_parse_table_array *v)
{
	v->a[1020] = actions(1569);
	v->a[1021] = 2;
	v->a[1022] = anon_sym_LT_LPAREN;
	v->a[1023] = anon_sym_GT_LPAREN;
	v->a[1024] = actions(1541);
	v->a[1025] = 3;
	v->a[1026] = sym_raw_string;
	v->a[1027] = sym_ansi_c_string;
	v->a[1028] = sym_word;
	v->a[1029] = state(1023);
	v->a[1030] = 9;
	v->a[1031] = sym_arithmetic_expansion;
	v->a[1032] = sym_brace_expression;
	v->a[1033] = sym_string;
	v->a[1034] = sym_translated_string;
	v->a[1035] = sym_number;
	v->a[1036] = sym_simple_expansion;
	v->a[1037] = sym_expansion;
	v->a[1038] = sym_command_substitution;
	v->a[1039] = sym_process_substitution;
	small_parse_table_52(v);
}

void	small_parse_table_52(t_small_parse_table_array *v)
{
	v->a[1040] = actions(1440);
	v->a[1041] = 20;
	v->a[1042] = anon_sym_SEMI;
	v->a[1043] = anon_sym_PIPE_PIPE;
	v->a[1044] = anon_sym_AMP_AMP;
	v->a[1045] = anon_sym_PIPE;
	v->a[1046] = anon_sym_AMP;
	v->a[1047] = anon_sym_LT;
	v->a[1048] = anon_sym_GT;
	v->a[1049] = anon_sym_LT_LT;
	v->a[1050] = anon_sym_GT_GT;
	v->a[1051] = anon_sym_RPAREN;
	v->a[1052] = anon_sym_SEMI_SEMI;
	v->a[1053] = anon_sym_PIPE_AMP;
	v->a[1054] = anon_sym_AMP_GT;
	v->a[1055] = anon_sym_AMP_GT_GT;
	v->a[1056] = anon_sym_LT_AMP;
	v->a[1057] = anon_sym_GT_AMP;
	v->a[1058] = anon_sym_GT_PIPE;
	v->a[1059] = anon_sym_LT_AMP_DASH;
	small_parse_table_53(v);
}

void	small_parse_table_53(t_small_parse_table_array *v)
{
	v->a[1060] = anon_sym_GT_AMP_DASH;
	v->a[1061] = anon_sym_LT_LT_DASH;
	v->a[1062] = 28;
	v->a[1063] = actions(3);
	v->a[1064] = 1;
	v->a[1065] = sym_comment;
	v->a[1066] = actions(19);
	v->a[1067] = 1;
	v->a[1068] = anon_sym_LPAREN;
	v->a[1069] = actions(1583);
	v->a[1070] = 1;
	v->a[1071] = anon_sym_LT_LT_LT;
	v->a[1072] = actions(1585);
	v->a[1073] = 1;
	v->a[1074] = anon_sym_DOLLAR_LBRACK;
	v->a[1075] = actions(1587);
	v->a[1076] = 1;
	v->a[1077] = anon_sym_DOLLAR;
	v->a[1078] = actions(1589);
	v->a[1079] = 1;
	small_parse_table_54(v);
}

void	small_parse_table_54(t_small_parse_table_array *v)
{
	v->a[1080] = sym__special_character;
	v->a[1081] = actions(1591);
	v->a[1082] = 1;
	v->a[1083] = anon_sym_DQUOTE;
	v->a[1084] = actions(1593);
	v->a[1085] = 1;
	v->a[1086] = aux_sym_number_token1;
	v->a[1087] = actions(1595);
	v->a[1088] = 1;
	v->a[1089] = aux_sym_number_token2;
	v->a[1090] = actions(1597);
	v->a[1091] = 1;
	v->a[1092] = anon_sym_DOLLAR_LBRACE;
	v->a[1093] = actions(1599);
	v->a[1094] = 1;
	v->a[1095] = anon_sym_DOLLAR_LPAREN;
	v->a[1096] = actions(1601);
	v->a[1097] = 1;
	v->a[1098] = anon_sym_BQUOTE;
	v->a[1099] = actions(1603);
	small_parse_table_55(v);
}

/* EOF small_parse_table_10.c */
