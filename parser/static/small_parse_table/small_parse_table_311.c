/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_311.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1555(t_small_parse_table_array *v)
{
	v->a[31100] = anon_sym_PIPE;
	v->a[31101] = anon_sym_EQ;
	v->a[31102] = anon_sym_LT;
	v->a[31103] = anon_sym_GT;
	v->a[31104] = anon_sym_GT_GT;
	v->a[31105] = anon_sym_LT_LT;
	v->a[31106] = anon_sym_CARET;
	v->a[31107] = anon_sym_AMP;
	v->a[31108] = anon_sym_PLUS;
	v->a[31109] = anon_sym_DASH;
	v->a[31110] = anon_sym_STAR;
	v->a[31111] = anon_sym_SLASH;
	v->a[31112] = anon_sym_PERCENT;
	v->a[31113] = actions(1225);
	v->a[31114] = 21;
	v->a[31115] = anon_sym_AMP_AMP;
	v->a[31116] = anon_sym_PIPE_PIPE;
	v->a[31117] = anon_sym_RPAREN_RPAREN;
	v->a[31118] = anon_sym_PLUS_EQ;
	v->a[31119] = anon_sym_DASH_EQ;
	small_parse_table_1556(v);
}

void	small_parse_table_1556(t_small_parse_table_array *v)
{
	v->a[31120] = anon_sym_STAR_EQ;
	v->a[31121] = anon_sym_SLASH_EQ;
	v->a[31122] = anon_sym_PERCENT_EQ;
	v->a[31123] = anon_sym_LT_LT_EQ;
	v->a[31124] = anon_sym_GT_GT_EQ;
	v->a[31125] = anon_sym_AMP_EQ;
	v->a[31126] = anon_sym_CARET_EQ;
	v->a[31127] = anon_sym_PIPE_EQ;
	v->a[31128] = anon_sym_EQ_EQ;
	v->a[31129] = anon_sym_BANG_EQ;
	v->a[31130] = anon_sym_LT_EQ;
	v->a[31131] = anon_sym_GT_EQ;
	v->a[31132] = anon_sym_QMARK;
	v->a[31133] = anon_sym_COLON;
	v->a[31134] = anon_sym_PLUS_PLUS2;
	v->a[31135] = anon_sym_DASH_DASH2;
	v->a[31136] = 6;
	v->a[31137] = actions(3);
	v->a[31138] = 1;
	v->a[31139] = sym_comment;
	small_parse_table_1557(v);
}

void	small_parse_table_1557(t_small_parse_table_array *v)
{
	v->a[31140] = actions(1096);
	v->a[31141] = 1;
	v->a[31142] = aux_sym_concatenation_token1;
	v->a[31143] = actions(1098);
	v->a[31144] = 1;
	v->a[31145] = sym__concat;
	v->a[31146] = state(349);
	v->a[31147] = 1;
	v->a[31148] = aux_sym_concatenation_repeat1;
	v->a[31149] = actions(543);
	v->a[31150] = 3;
	v->a[31151] = sym_file_descriptor;
	v->a[31152] = sym_variable_name;
	v->a[31153] = ts_builtin_sym_end;
	v->a[31154] = actions(541);
	v->a[31155] = 28;
	v->a[31156] = anon_sym_PIPE;
	v->a[31157] = anon_sym_SEMI_SEMI;
	v->a[31158] = anon_sym_AMP_AMP;
	v->a[31159] = anon_sym_PIPE_PIPE;
	small_parse_table_1558(v);
}

void	small_parse_table_1558(t_small_parse_table_array *v)
{
	v->a[31160] = anon_sym_LT;
	v->a[31161] = anon_sym_GT;
	v->a[31162] = anon_sym_GT_GT;
	v->a[31163] = anon_sym_AMP_GT;
	v->a[31164] = anon_sym_AMP_GT_GT;
	v->a[31165] = anon_sym_LT_AMP;
	v->a[31166] = anon_sym_GT_AMP;
	v->a[31167] = anon_sym_GT_PIPE;
	v->a[31168] = anon_sym_LT_AMP_DASH;
	v->a[31169] = anon_sym_GT_AMP_DASH;
	v->a[31170] = anon_sym_LT_LT;
	v->a[31171] = anon_sym_LT_LT_DASH;
	v->a[31172] = aux_sym_heredoc_redirect_token1;
	v->a[31173] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31174] = anon_sym_AMP;
	v->a[31175] = anon_sym_DOLLAR;
	v->a[31176] = anon_sym_DQUOTE;
	v->a[31177] = sym_raw_string;
	v->a[31178] = sym_number;
	v->a[31179] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1559(v);
}

void	small_parse_table_1559(t_small_parse_table_array *v)
{
	v->a[31180] = anon_sym_DOLLAR_LPAREN;
	v->a[31181] = anon_sym_BQUOTE;
	v->a[31182] = sym_word;
	v->a[31183] = anon_sym_SEMI;
	v->a[31184] = 10;
	v->a[31185] = actions(1094);
	v->a[31186] = 1;
	v->a[31187] = sym_comment;
	v->a[31188] = actions(1082);
	v->a[31189] = 2;
	v->a[31190] = anon_sym_LT;
	v->a[31191] = anon_sym_GT;
	v->a[31192] = actions(1084);
	v->a[31193] = 2;
	v->a[31194] = anon_sym_GT_GT;
	v->a[31195] = anon_sym_LT_LT;
	v->a[31196] = actions(1086);
	v->a[31197] = 2;
	v->a[31198] = anon_sym_LT_EQ;
	v->a[31199] = anon_sym_GT_EQ;
	small_parse_table_1560(v);
}

/* EOF small_parse_table_311.c */
