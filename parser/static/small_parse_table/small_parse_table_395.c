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
	v->a[39500] = anon_sym_DOLLAR_LBRACE;
	v->a[39501] = anon_sym_DOLLAR_LPAREN;
	v->a[39502] = anon_sym_BQUOTE;
	v->a[39503] = sym_word;
	v->a[39504] = 12;
	v->a[39505] = actions(3);
	v->a[39506] = 1;
	v->a[39507] = sym_comment;
	v->a[39508] = actions(613);
	v->a[39509] = 1;
	v->a[39510] = sym_variable_name;
	v->a[39511] = actions(1478);
	v->a[39512] = 1;
	v->a[39513] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39514] = actions(1481);
	v->a[39515] = 1;
	v->a[39516] = anon_sym_DOLLAR;
	v->a[39517] = actions(1484);
	v->a[39518] = 1;
	v->a[39519] = anon_sym_DQUOTE;
	small_parse_table_1976(v);
}

void	small_parse_table_1976(t_small_parse_table_array *v)
{
	v->a[39520] = actions(1487);
	v->a[39521] = 1;
	v->a[39522] = anon_sym_DOLLAR_LBRACE;
	v->a[39523] = actions(1490);
	v->a[39524] = 1;
	v->a[39525] = anon_sym_DOLLAR_LPAREN;
	v->a[39526] = actions(1493);
	v->a[39527] = 1;
	v->a[39528] = anon_sym_BQUOTE;
	v->a[39529] = state(669);
	v->a[39530] = 2;
	v->a[39531] = sym_concatenation;
	v->a[39532] = aux_sym_for_statement_repeat1;
	v->a[39533] = actions(1475);
	v->a[39534] = 3;
	v->a[39535] = sym_raw_string;
	v->a[39536] = sym_number;
	v->a[39537] = sym_word;
	v->a[39538] = state(827);
	v->a[39539] = 5;
	small_parse_table_1977(v);
}

void	small_parse_table_1977(t_small_parse_table_array *v)
{
	v->a[39540] = sym_arithmetic_expansion;
	v->a[39541] = sym_string;
	v->a[39542] = sym_simple_expansion;
	v->a[39543] = sym_expansion;
	v->a[39544] = sym_command_substitution;
	v->a[39545] = actions(618);
	v->a[39546] = 7;
	v->a[39547] = anon_sym_LT;
	v->a[39548] = anon_sym_GT;
	v->a[39549] = anon_sym_GT_GT;
	v->a[39550] = anon_sym_LT_AMP;
	v->a[39551] = anon_sym_GT_AMP;
	v->a[39552] = anon_sym_GT_PIPE;
	v->a[39553] = anon_sym_LT_GT;
	v->a[39554] = 3;
	v->a[39555] = actions(3);
	v->a[39556] = 1;
	v->a[39557] = sym_comment;
	v->a[39558] = actions(469);
	v->a[39559] = 2;
	small_parse_table_1978(v);
}

void	small_parse_table_1978(t_small_parse_table_array *v)
{
	v->a[39560] = sym__concat;
	v->a[39561] = sym__bare_dollar;
	v->a[39562] = actions(467);
	v->a[39563] = 22;
	v->a[39564] = anon_sym_PIPE;
	v->a[39565] = anon_sym_AMP_AMP;
	v->a[39566] = anon_sym_PIPE_PIPE;
	v->a[39567] = anon_sym_LT;
	v->a[39568] = anon_sym_GT;
	v->a[39569] = anon_sym_GT_GT;
	v->a[39570] = anon_sym_LT_AMP;
	v->a[39571] = anon_sym_GT_AMP;
	v->a[39572] = anon_sym_GT_PIPE;
	v->a[39573] = anon_sym_LT_GT;
	v->a[39574] = anon_sym_LT_LT;
	v->a[39575] = anon_sym_LT_LT_DASH;
	v->a[39576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39577] = aux_sym_concatenation_token1;
	v->a[39578] = anon_sym_DOLLAR;
	v->a[39579] = anon_sym_DQUOTE;
	small_parse_table_1979(v);
}

void	small_parse_table_1979(t_small_parse_table_array *v)
{
	v->a[39580] = sym_raw_string;
	v->a[39581] = sym_number;
	v->a[39582] = anon_sym_DOLLAR_LBRACE;
	v->a[39583] = anon_sym_DOLLAR_LPAREN;
	v->a[39584] = anon_sym_BQUOTE;
	v->a[39585] = sym_word;
	v->a[39586] = 3;
	v->a[39587] = actions(3);
	v->a[39588] = 1;
	v->a[39589] = sym_comment;
	v->a[39590] = actions(1165);
	v->a[39591] = 2;
	v->a[39592] = sym__concat;
	v->a[39593] = sym_variable_name;
	v->a[39594] = actions(1163);
	v->a[39595] = 22;
	v->a[39596] = anon_sym_PIPE;
	v->a[39597] = anon_sym_AMP_AMP;
	v->a[39598] = anon_sym_PIPE_PIPE;
	v->a[39599] = anon_sym_LT;
	small_parse_table_1980(v);
}

/* EOF small_parse_table_395.c */
