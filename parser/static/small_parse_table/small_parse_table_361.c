/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_361.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1805(t_small_parse_table_array *v)
{
	v->a[36100] = actions(1249);
	v->a[36101] = 1;
	v->a[36102] = sym_variable_name;
	v->a[36103] = actions(1367);
	v->a[36104] = 1;
	v->a[36105] = ts_builtin_sym_end;
	v->a[36106] = actions(1245);
	v->a[36107] = 24;
	v->a[36108] = anon_sym_for;
	v->a[36109] = anon_sym_while;
	v->a[36110] = anon_sym_until;
	v->a[36111] = anon_sym_if;
	v->a[36112] = anon_sym_case;
	v->a[36113] = anon_sym_LPAREN;
	v->a[36114] = anon_sym_LBRACE;
	v->a[36115] = anon_sym_BANG;
	v->a[36116] = anon_sym_LT;
	v->a[36117] = anon_sym_GT;
	v->a[36118] = anon_sym_GT_GT;
	v->a[36119] = anon_sym_LT_AMP;
	small_parse_table_1806(v);
}

void	small_parse_table_1806(t_small_parse_table_array *v)
{
	v->a[36120] = anon_sym_GT_AMP;
	v->a[36121] = anon_sym_GT_PIPE;
	v->a[36122] = anon_sym_LT_GT;
	v->a[36123] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36124] = anon_sym_DOLLAR;
	v->a[36125] = anon_sym_DQUOTE;
	v->a[36126] = sym_raw_string;
	v->a[36127] = sym_number;
	v->a[36128] = anon_sym_DOLLAR_LBRACE;
	v->a[36129] = anon_sym_DOLLAR_LPAREN;
	v->a[36130] = anon_sym_BQUOTE;
	v->a[36131] = sym_word;
	v->a[36132] = 4;
	v->a[36133] = actions(3);
	v->a[36134] = 1;
	v->a[36135] = sym_comment;
	v->a[36136] = actions(1249);
	v->a[36137] = 1;
	v->a[36138] = sym_variable_name;
	v->a[36139] = actions(1367);
	small_parse_table_1807(v);
}

void	small_parse_table_1807(t_small_parse_table_array *v)
{
	v->a[36140] = 1;
	v->a[36141] = ts_builtin_sym_end;
	v->a[36142] = actions(1245);
	v->a[36143] = 24;
	v->a[36144] = anon_sym_for;
	v->a[36145] = anon_sym_while;
	v->a[36146] = anon_sym_until;
	v->a[36147] = anon_sym_if;
	v->a[36148] = anon_sym_case;
	v->a[36149] = anon_sym_LPAREN;
	v->a[36150] = anon_sym_LBRACE;
	v->a[36151] = anon_sym_BANG;
	v->a[36152] = anon_sym_LT;
	v->a[36153] = anon_sym_GT;
	v->a[36154] = anon_sym_GT_GT;
	v->a[36155] = anon_sym_LT_AMP;
	v->a[36156] = anon_sym_GT_AMP;
	v->a[36157] = anon_sym_GT_PIPE;
	v->a[36158] = anon_sym_LT_GT;
	v->a[36159] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1808(v);
}

void	small_parse_table_1808(t_small_parse_table_array *v)
{
	v->a[36160] = anon_sym_DOLLAR;
	v->a[36161] = anon_sym_DQUOTE;
	v->a[36162] = sym_raw_string;
	v->a[36163] = sym_number;
	v->a[36164] = anon_sym_DOLLAR_LBRACE;
	v->a[36165] = anon_sym_DOLLAR_LPAREN;
	v->a[36166] = anon_sym_BQUOTE;
	v->a[36167] = sym_word;
	v->a[36168] = 6;
	v->a[36169] = actions(3);
	v->a[36170] = 1;
	v->a[36171] = sym_comment;
	v->a[36172] = actions(1289);
	v->a[36173] = 1;
	v->a[36174] = sym_variable_name;
	v->a[36175] = actions(1369);
	v->a[36176] = 1;
	v->a[36177] = anon_sym_RPAREN;
	v->a[36178] = actions(1286);
	v->a[36179] = 7;
	small_parse_table_1809(v);
}

void	small_parse_table_1809(t_small_parse_table_array *v)
{
	v->a[36180] = anon_sym_LT;
	v->a[36181] = anon_sym_GT;
	v->a[36182] = anon_sym_GT_GT;
	v->a[36183] = anon_sym_LT_AMP;
	v->a[36184] = anon_sym_GT_AMP;
	v->a[36185] = anon_sym_GT_PIPE;
	v->a[36186] = anon_sym_LT_GT;
	v->a[36187] = actions(1281);
	v->a[36188] = 8;
	v->a[36189] = anon_sym_PIPE;
	v->a[36190] = anon_sym_SEMI_SEMI;
	v->a[36191] = anon_sym_AMP_AMP;
	v->a[36192] = anon_sym_PIPE_PIPE;
	v->a[36193] = anon_sym_LT_LT;
	v->a[36194] = anon_sym_LT_LT_DASH;
	v->a[36195] = aux_sym_heredoc_redirect_token1;
	v->a[36196] = anon_sym_SEMI;
	v->a[36197] = actions(1279);
	v->a[36198] = 9;
	v->a[36199] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1810(v);
}

/* EOF small_parse_table_361.c */
