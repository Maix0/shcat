/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_235.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1175(t_small_parse_table_array *v)
{
	v->a[23500] = aux_sym_heredoc_redirect_token1;
	v->a[23501] = anon_sym_AMP;
	v->a[23502] = anon_sym_SEMI;
	v->a[23503] = 12;
	v->a[23504] = actions(3);
	v->a[23505] = 1;
	v->a[23506] = sym_comment;
	v->a[23507] = actions(615);
	v->a[23508] = 1;
	v->a[23509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23510] = actions(618);
	v->a[23511] = 1;
	v->a[23512] = anon_sym_DOLLAR;
	v->a[23513] = actions(621);
	v->a[23514] = 1;
	v->a[23515] = anon_sym_DQUOTE;
	v->a[23516] = actions(624);
	v->a[23517] = 1;
	v->a[23518] = anon_sym_DOLLAR_LBRACE;
	v->a[23519] = actions(627);
	small_parse_table_1176(v);
}

void	small_parse_table_1176(t_small_parse_table_array *v)
{
	v->a[23520] = 1;
	v->a[23521] = anon_sym_DOLLAR_LPAREN;
	v->a[23522] = actions(630);
	v->a[23523] = 1;
	v->a[23524] = anon_sym_BQUOTE;
	v->a[23525] = actions(559);
	v->a[23526] = 2;
	v->a[23527] = sym_file_descriptor;
	v->a[23528] = sym_variable_name;
	v->a[23529] = state(225);
	v->a[23530] = 2;
	v->a[23531] = sym_concatenation;
	v->a[23532] = aux_sym_for_statement_repeat1;
	v->a[23533] = actions(724);
	v->a[23534] = 3;
	v->a[23535] = sym_raw_string;
	v->a[23536] = sym_number;
	v->a[23537] = sym_word;
	v->a[23538] = state(499);
	v->a[23539] = 5;
	small_parse_table_1177(v);
}

void	small_parse_table_1177(t_small_parse_table_array *v)
{
	v->a[23540] = sym_arithmetic_expansion;
	v->a[23541] = sym_string;
	v->a[23542] = sym_simple_expansion;
	v->a[23543] = sym_expansion;
	v->a[23544] = sym_command_substitution;
	v->a[23545] = actions(564);
	v->a[23546] = 19;
	v->a[23547] = anon_sym_PIPE;
	v->a[23548] = anon_sym_SEMI_SEMI;
	v->a[23549] = anon_sym_AMP_AMP;
	v->a[23550] = anon_sym_PIPE_PIPE;
	v->a[23551] = anon_sym_LT;
	v->a[23552] = anon_sym_GT;
	v->a[23553] = anon_sym_GT_GT;
	v->a[23554] = anon_sym_AMP_GT;
	v->a[23555] = anon_sym_AMP_GT_GT;
	v->a[23556] = anon_sym_LT_AMP;
	v->a[23557] = anon_sym_GT_AMP;
	v->a[23558] = anon_sym_GT_PIPE;
	v->a[23559] = anon_sym_LT_AMP_DASH;
	small_parse_table_1178(v);
}

void	small_parse_table_1178(t_small_parse_table_array *v)
{
	v->a[23560] = anon_sym_GT_AMP_DASH;
	v->a[23561] = anon_sym_LT_LT;
	v->a[23562] = anon_sym_LT_LT_DASH;
	v->a[23563] = aux_sym_heredoc_redirect_token1;
	v->a[23564] = anon_sym_AMP;
	v->a[23565] = anon_sym_SEMI;
	v->a[23566] = 12;
	v->a[23567] = actions(3);
	v->a[23568] = 1;
	v->a[23569] = sym_comment;
	v->a[23570] = actions(729);
	v->a[23571] = 1;
	v->a[23572] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23573] = actions(731);
	v->a[23574] = 1;
	v->a[23575] = anon_sym_DOLLAR;
	v->a[23576] = actions(733);
	v->a[23577] = 1;
	v->a[23578] = anon_sym_DQUOTE;
	v->a[23579] = actions(735);
	small_parse_table_1179(v);
}

void	small_parse_table_1179(t_small_parse_table_array *v)
{
	v->a[23580] = 1;
	v->a[23581] = anon_sym_DOLLAR_LBRACE;
	v->a[23582] = actions(737);
	v->a[23583] = 1;
	v->a[23584] = anon_sym_DOLLAR_LPAREN;
	v->a[23585] = actions(739);
	v->a[23586] = 1;
	v->a[23587] = anon_sym_BQUOTE;
	v->a[23588] = actions(608);
	v->a[23589] = 2;
	v->a[23590] = sym_file_descriptor;
	v->a[23591] = ts_builtin_sym_end;
	v->a[23592] = state(212);
	v->a[23593] = 2;
	v->a[23594] = sym_concatenation;
	v->a[23595] = aux_sym_for_statement_repeat1;
	v->a[23596] = actions(727);
	v->a[23597] = 3;
	v->a[23598] = sym_raw_string;
	v->a[23599] = sym_number;
	small_parse_table_1180(v);
}

/* EOF small_parse_table_235.c */
