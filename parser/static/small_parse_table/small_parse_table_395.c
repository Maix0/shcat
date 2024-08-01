/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_395.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1975(t_small_parse_table_array *v)
{
	v->a[39500] = sym__comment_word;
	v->a[39501] = sym_word;
	v->a[39502] = state(400);
	v->a[39503] = 5;
	v->a[39504] = sym_arithmetic_expansion;
	v->a[39505] = sym_string;
	v->a[39506] = sym_simple_expansion;
	v->a[39507] = sym_expansion;
	v->a[39508] = sym_command_substitution;
	v->a[39509] = 3;
	v->a[39510] = actions(3);
	v->a[39511] = 1;
	v->a[39512] = sym_comment;
	v->a[39513] = actions(911);
	v->a[39514] = 1;
	v->a[39515] = sym__bare_dollar;
	v->a[39516] = actions(909);
	v->a[39517] = 16;
	v->a[39518] = anon_sym_PIPE;
	v->a[39519] = anon_sym_AMP_AMP;
	small_parse_table_1976(v);
}

void	small_parse_table_1976(t_small_parse_table_array *v)
{
	v->a[39520] = anon_sym_PIPE_PIPE;
	v->a[39521] = anon_sym_LT;
	v->a[39522] = anon_sym_GT;
	v->a[39523] = anon_sym_GT_GT;
	v->a[39524] = anon_sym_LT_LT;
	v->a[39525] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39526] = anon_sym_DOLLAR;
	v->a[39527] = anon_sym_DQUOTE;
	v->a[39528] = sym_raw_string;
	v->a[39529] = sym_number;
	v->a[39530] = anon_sym_DOLLAR_LBRACE;
	v->a[39531] = anon_sym_DOLLAR_LPAREN;
	v->a[39532] = anon_sym_BQUOTE;
	v->a[39533] = sym_word;
	v->a[39534] = 10;
	v->a[39535] = actions(3);
	v->a[39536] = 1;
	v->a[39537] = sym_comment;
	v->a[39538] = actions(1625);
	v->a[39539] = 1;
	small_parse_table_1977(v);
}

void	small_parse_table_1977(t_small_parse_table_array *v)
{
	v->a[39540] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39541] = actions(1627);
	v->a[39542] = 1;
	v->a[39543] = anon_sym_DOLLAR;
	v->a[39544] = actions(1629);
	v->a[39545] = 1;
	v->a[39546] = anon_sym_DQUOTE;
	v->a[39547] = actions(1631);
	v->a[39548] = 1;
	v->a[39549] = anon_sym_DOLLAR_LBRACE;
	v->a[39550] = actions(1633);
	v->a[39551] = 1;
	v->a[39552] = anon_sym_DOLLAR_LPAREN;
	v->a[39553] = actions(1635);
	v->a[39554] = 1;
	v->a[39555] = anon_sym_BQUOTE;
	v->a[39556] = state(168);
	v->a[39557] = 2;
	v->a[39558] = sym_concatenation;
	v->a[39559] = aux_sym_for_statement_repeat1;
	small_parse_table_1978(v);
}

void	small_parse_table_1978(t_small_parse_table_array *v)
{
	v->a[39560] = actions(1824);
	v->a[39561] = 3;
	v->a[39562] = sym_raw_string;
	v->a[39563] = sym_number;
	v->a[39564] = sym_word;
	v->a[39565] = state(282);
	v->a[39566] = 5;
	v->a[39567] = sym_arithmetic_expansion;
	v->a[39568] = sym_string;
	v->a[39569] = sym_simple_expansion;
	v->a[39570] = sym_expansion;
	v->a[39571] = sym_command_substitution;
	v->a[39572] = 3;
	v->a[39573] = actions(3);
	v->a[39574] = 1;
	v->a[39575] = sym_comment;
	v->a[39576] = actions(1060);
	v->a[39577] = 4;
	v->a[39578] = sym__concat;
	v->a[39579] = sym_variable_name;
	small_parse_table_1979(v);
}

void	small_parse_table_1979(t_small_parse_table_array *v)
{
	v->a[39580] = ts_builtin_sym_end;
	v->a[39581] = aux_sym_heredoc_redirect_token1;
	v->a[39582] = actions(1058);
	v->a[39583] = 12;
	v->a[39584] = anon_sym_PIPE;
	v->a[39585] = anon_sym_RPAREN;
	v->a[39586] = anon_sym_SEMI_SEMI;
	v->a[39587] = anon_sym_AMP_AMP;
	v->a[39588] = anon_sym_PIPE_PIPE;
	v->a[39589] = anon_sym_LT;
	v->a[39590] = anon_sym_GT;
	v->a[39591] = anon_sym_GT_GT;
	v->a[39592] = anon_sym_LT_LT;
	v->a[39593] = aux_sym_concatenation_token1;
	v->a[39594] = anon_sym_BQUOTE;
	v->a[39595] = anon_sym_SEMI;
	v->a[39596] = 3;
	v->a[39597] = actions(3);
	v->a[39598] = 1;
	v->a[39599] = sym_comment;
	small_parse_table_1980(v);
}

/* EOF small_parse_table_395.c */
