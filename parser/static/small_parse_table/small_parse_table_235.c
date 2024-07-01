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
	v->a[23500] = actions(682);
	v->a[23501] = 1;
	v->a[23502] = anon_sym_PIPE;
	v->a[23503] = actions(690);
	v->a[23504] = 1;
	v->a[23505] = sym_file_descriptor;
	v->a[23506] = actions(756);
	v->a[23507] = 1;
	v->a[23508] = sym_variable_name;
	v->a[23509] = state(716);
	v->a[23510] = 1;
	v->a[23511] = sym_terminator;
	v->a[23512] = actions(752);
	v->a[23513] = 2;
	v->a[23514] = anon_sym_AMP_AMP;
	v->a[23515] = anon_sym_PIPE_PIPE;
	v->a[23516] = actions(754);
	v->a[23517] = 2;
	v->a[23518] = anon_sym_LT_LT;
	v->a[23519] = anon_sym_LT_LT_DASH;
	small_parse_table_1176(v);
}

void	small_parse_table_1176(t_small_parse_table_array *v)
{
	v->a[23520] = state(1163);
	v->a[23521] = 2;
	v->a[23522] = sym_variable_assignment;
	v->a[23523] = aux_sym__variable_assignments_repeat1;
	v->a[23524] = state(1128);
	v->a[23525] = 3;
	v->a[23526] = sym_file_redirect;
	v->a[23527] = sym_heredoc_redirect;
	v->a[23528] = aux_sym_redirected_statement_repeat1;
	v->a[23529] = actions(750);
	v->a[23530] = 4;
	v->a[23531] = anon_sym_SEMI_SEMI;
	v->a[23532] = aux_sym_heredoc_redirect_token1;
	v->a[23533] = anon_sym_AMP;
	v->a[23534] = anon_sym_SEMI;
	v->a[23535] = actions(678);
	v->a[23536] = 17;
	v->a[23537] = anon_sym_LT;
	v->a[23538] = anon_sym_GT;
	v->a[23539] = anon_sym_GT_GT;
	small_parse_table_1177(v);
}

void	small_parse_table_1177(t_small_parse_table_array *v)
{
	v->a[23540] = anon_sym_LT_AMP;
	v->a[23541] = anon_sym_GT_AMP;
	v->a[23542] = anon_sym_GT_PIPE;
	v->a[23543] = anon_sym_LT_AMP_DASH;
	v->a[23544] = anon_sym_GT_AMP_DASH;
	v->a[23545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23546] = anon_sym_DOLLAR;
	v->a[23547] = anon_sym_DQUOTE;
	v->a[23548] = sym_raw_string;
	v->a[23549] = sym_number;
	v->a[23550] = anon_sym_DOLLAR_LBRACE;
	v->a[23551] = anon_sym_DOLLAR_LPAREN;
	v->a[23552] = anon_sym_BQUOTE;
	v->a[23553] = sym_word;
	v->a[23554] = 5;
	v->a[23555] = actions(3);
	v->a[23556] = 1;
	v->a[23557] = sym_comment;
	v->a[23558] = state(754);
	v->a[23559] = 1;
	small_parse_table_1178(v);
}

void	small_parse_table_1178(t_small_parse_table_array *v)
{
	v->a[23560] = sym_concatenation;
	v->a[23561] = actions(713);
	v->a[23562] = 3;
	v->a[23563] = sym_file_descriptor;
	v->a[23564] = sym_variable_name;
	v->a[23565] = ts_builtin_sym_end;
	v->a[23566] = state(446);
	v->a[23567] = 5;
	v->a[23568] = sym_arithmetic_expansion;
	v->a[23569] = sym_string;
	v->a[23570] = sym_simple_expansion;
	v->a[23571] = sym_expansion;
	v->a[23572] = sym_command_substitution;
	v->a[23573] = actions(711);
	v->a[23574] = 26;
	v->a[23575] = anon_sym_PIPE;
	v->a[23576] = anon_sym_SEMI_SEMI;
	v->a[23577] = anon_sym_AMP_AMP;
	v->a[23578] = anon_sym_PIPE_PIPE;
	v->a[23579] = anon_sym_LT;
	small_parse_table_1179(v);
}

void	small_parse_table_1179(t_small_parse_table_array *v)
{
	v->a[23580] = anon_sym_GT;
	v->a[23581] = anon_sym_GT_GT;
	v->a[23582] = anon_sym_LT_AMP;
	v->a[23583] = anon_sym_GT_AMP;
	v->a[23584] = anon_sym_GT_PIPE;
	v->a[23585] = anon_sym_LT_AMP_DASH;
	v->a[23586] = anon_sym_GT_AMP_DASH;
	v->a[23587] = anon_sym_LT_LT;
	v->a[23588] = anon_sym_LT_LT_DASH;
	v->a[23589] = aux_sym_heredoc_redirect_token1;
	v->a[23590] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23591] = anon_sym_AMP;
	v->a[23592] = anon_sym_DOLLAR;
	v->a[23593] = anon_sym_DQUOTE;
	v->a[23594] = sym_raw_string;
	v->a[23595] = sym_number;
	v->a[23596] = anon_sym_DOLLAR_LBRACE;
	v->a[23597] = anon_sym_DOLLAR_LPAREN;
	v->a[23598] = anon_sym_BQUOTE;
	v->a[23599] = sym_word;
	small_parse_table_1180(v);
}

/* EOF small_parse_table_235.c */
