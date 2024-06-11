/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_341.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1705(t_small_parse_table_array *v)
{
	v->a[34100] = actions(1145);
	v->a[34101] = 4;
	v->a[34102] = sym_file_descriptor;
	v->a[34103] = sym__concat;
	v->a[34104] = sym__bare_dollar;
	v->a[34105] = ts_builtin_sym_end;
	v->a[34106] = actions(1143);
	v->a[34107] = 29;
	v->a[34108] = anon_sym_PIPE;
	v->a[34109] = anon_sym_SEMI_SEMI;
	v->a[34110] = anon_sym_AMP_AMP;
	v->a[34111] = anon_sym_PIPE_PIPE;
	v->a[34112] = anon_sym_LT;
	v->a[34113] = anon_sym_GT;
	v->a[34114] = anon_sym_GT_GT;
	v->a[34115] = anon_sym_AMP_GT;
	v->a[34116] = anon_sym_AMP_GT_GT;
	v->a[34117] = anon_sym_LT_AMP;
	v->a[34118] = anon_sym_GT_AMP;
	v->a[34119] = anon_sym_GT_PIPE;
	small_parse_table_1706(v);
}

void	small_parse_table_1706(t_small_parse_table_array *v)
{
	v->a[34120] = anon_sym_LT_AMP_DASH;
	v->a[34121] = anon_sym_GT_AMP_DASH;
	v->a[34122] = anon_sym_LT_LT;
	v->a[34123] = anon_sym_LT_LT_DASH;
	v->a[34124] = aux_sym_heredoc_redirect_token1;
	v->a[34125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34126] = anon_sym_AMP;
	v->a[34127] = aux_sym_concatenation_token1;
	v->a[34128] = anon_sym_DOLLAR;
	v->a[34129] = anon_sym_DQUOTE;
	v->a[34130] = sym_raw_string;
	v->a[34131] = sym_number;
	v->a[34132] = anon_sym_DOLLAR_LBRACE;
	v->a[34133] = anon_sym_DOLLAR_LPAREN;
	v->a[34134] = anon_sym_BQUOTE;
	v->a[34135] = sym_word;
	v->a[34136] = anon_sym_SEMI;
	v->a[34137] = 17;
	v->a[34138] = actions(1094);
	v->a[34139] = 1;
	small_parse_table_1707(v);
}

void	small_parse_table_1707(t_small_parse_table_array *v)
{
	v->a[34140] = sym_comment;
	v->a[34141] = actions(1108);
	v->a[34142] = 1;
	v->a[34143] = anon_sym_PIPE;
	v->a[34144] = actions(1110);
	v->a[34145] = 1;
	v->a[34146] = anon_sym_AMP_AMP;
	v->a[34147] = actions(1112);
	v->a[34148] = 1;
	v->a[34149] = anon_sym_CARET;
	v->a[34150] = actions(1114);
	v->a[34151] = 1;
	v->a[34152] = anon_sym_AMP;
	v->a[34153] = actions(1126);
	v->a[34154] = 1;
	v->a[34155] = anon_sym_PIPE_PIPE;
	v->a[34156] = actions(1128);
	v->a[34157] = 1;
	v->a[34158] = anon_sym_QMARK;
	v->a[34159] = actions(1155);
	small_parse_table_1708(v);
}

void	small_parse_table_1708(t_small_parse_table_array *v)
{
	v->a[34160] = 1;
	v->a[34161] = anon_sym_EQ;
	v->a[34162] = actions(1290);
	v->a[34163] = 1;
	v->a[34164] = anon_sym_RPAREN_RPAREN;
	v->a[34165] = actions(1082);
	v->a[34166] = 2;
	v->a[34167] = anon_sym_LT;
	v->a[34168] = anon_sym_GT;
	v->a[34169] = actions(1084);
	v->a[34170] = 2;
	v->a[34171] = anon_sym_GT_GT;
	v->a[34172] = anon_sym_LT_LT;
	v->a[34173] = actions(1086);
	v->a[34174] = 2;
	v->a[34175] = anon_sym_LT_EQ;
	v->a[34176] = anon_sym_GT_EQ;
	v->a[34177] = actions(1088);
	v->a[34178] = 2;
	v->a[34179] = anon_sym_PLUS;
	small_parse_table_1709(v);
}

void	small_parse_table_1709(t_small_parse_table_array *v)
{
	v->a[34180] = anon_sym_DASH;
	v->a[34181] = actions(1092);
	v->a[34182] = 2;
	v->a[34183] = anon_sym_PLUS_PLUS2;
	v->a[34184] = anon_sym_DASH_DASH2;
	v->a[34185] = actions(1116);
	v->a[34186] = 2;
	v->a[34187] = anon_sym_EQ_EQ;
	v->a[34188] = anon_sym_BANG_EQ;
	v->a[34189] = actions(1090);
	v->a[34190] = 3;
	v->a[34191] = anon_sym_STAR;
	v->a[34192] = anon_sym_SLASH;
	v->a[34193] = anon_sym_PERCENT;
	v->a[34194] = actions(1288);
	v->a[34195] = 10;
	v->a[34196] = anon_sym_PLUS_EQ;
	v->a[34197] = anon_sym_DASH_EQ;
	v->a[34198] = anon_sym_STAR_EQ;
	v->a[34199] = anon_sym_SLASH_EQ;
	small_parse_table_1710(v);
}

/* EOF small_parse_table_341.c */
