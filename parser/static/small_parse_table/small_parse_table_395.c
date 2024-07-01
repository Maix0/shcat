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
	v->a[39500] = 2;
	v->a[39501] = sym_file_descriptor;
	v->a[39502] = sym_variable_name;
	v->a[39503] = actions(1287);
	v->a[39504] = 27;
	v->a[39505] = anon_sym_for;
	v->a[39506] = anon_sym_while;
	v->a[39507] = anon_sym_until;
	v->a[39508] = anon_sym_if;
	v->a[39509] = anon_sym_fi;
	v->a[39510] = anon_sym_elif;
	v->a[39511] = anon_sym_else;
	v->a[39512] = anon_sym_case;
	v->a[39513] = anon_sym_LPAREN;
	v->a[39514] = anon_sym_LBRACE;
	v->a[39515] = anon_sym_BANG;
	v->a[39516] = anon_sym_LT;
	v->a[39517] = anon_sym_GT;
	v->a[39518] = anon_sym_GT_GT;
	v->a[39519] = anon_sym_LT_AMP;
	small_parse_table_1976(v);
}

void	small_parse_table_1976(t_small_parse_table_array *v)
{
	v->a[39520] = anon_sym_GT_AMP;
	v->a[39521] = anon_sym_GT_PIPE;
	v->a[39522] = anon_sym_LT_GT;
	v->a[39523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39524] = anon_sym_DOLLAR;
	v->a[39525] = anon_sym_DQUOTE;
	v->a[39526] = sym_raw_string;
	v->a[39527] = sym_number;
	v->a[39528] = anon_sym_DOLLAR_LBRACE;
	v->a[39529] = anon_sym_DOLLAR_LPAREN;
	v->a[39530] = anon_sym_BQUOTE;
	v->a[39531] = sym_word;
	v->a[39532] = 10;
	v->a[39533] = actions(3);
	v->a[39534] = 1;
	v->a[39535] = sym_comment;
	v->a[39536] = actions(736);
	v->a[39537] = 1;
	v->a[39538] = anon_sym_PIPE;
	v->a[39539] = actions(746);
	small_parse_table_1977(v);
}

void	small_parse_table_1977(t_small_parse_table_array *v)
{
	v->a[39540] = 1;
	v->a[39541] = sym_file_descriptor;
	v->a[39542] = actions(1393);
	v->a[39543] = 1;
	v->a[39544] = sym_variable_name;
	v->a[39545] = actions(1398);
	v->a[39546] = 1;
	v->a[39547] = aux_sym_heredoc_redirect_token1;
	v->a[39548] = actions(744);
	v->a[39549] = 2;
	v->a[39550] = anon_sym_LT_LT;
	v->a[39551] = anon_sym_LT_LT_DASH;
	v->a[39552] = actions(1396);
	v->a[39553] = 2;
	v->a[39554] = anon_sym_AMP_AMP;
	v->a[39555] = anon_sym_PIPE_PIPE;
	v->a[39556] = state(1355);
	v->a[39557] = 2;
	v->a[39558] = sym_variable_assignment;
	v->a[39559] = aux_sym__variable_assignments_repeat1;
	small_parse_table_1978(v);
}

void	small_parse_table_1978(t_small_parse_table_array *v)
{
	v->a[39560] = state(1359);
	v->a[39561] = 3;
	v->a[39562] = sym_file_redirect;
	v->a[39563] = sym_heredoc_redirect;
	v->a[39564] = aux_sym_redirected_statement_repeat1;
	v->a[39565] = actions(734);
	v->a[39566] = 16;
	v->a[39567] = anon_sym_LT;
	v->a[39568] = anon_sym_GT;
	v->a[39569] = anon_sym_GT_GT;
	v->a[39570] = anon_sym_LT_AMP;
	v->a[39571] = anon_sym_GT_AMP;
	v->a[39572] = anon_sym_GT_PIPE;
	v->a[39573] = anon_sym_LT_GT;
	v->a[39574] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39575] = anon_sym_DOLLAR;
	v->a[39576] = anon_sym_DQUOTE;
	v->a[39577] = sym_raw_string;
	v->a[39578] = sym_number;
	v->a[39579] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1979(v);
}

void	small_parse_table_1979(t_small_parse_table_array *v)
{
	v->a[39580] = anon_sym_DOLLAR_LPAREN;
	v->a[39581] = anon_sym_BQUOTE;
	v->a[39582] = sym_word;
	v->a[39583] = 3;
	v->a[39584] = actions(3);
	v->a[39585] = 1;
	v->a[39586] = sym_comment;
	v->a[39587] = actions(662);
	v->a[39588] = 2;
	v->a[39589] = sym_file_descriptor;
	v->a[39590] = sym__concat;
	v->a[39591] = actions(660);
	v->a[39592] = 27;
	v->a[39593] = anon_sym_esac;
	v->a[39594] = anon_sym_PIPE;
	v->a[39595] = anon_sym_SEMI_SEMI;
	v->a[39596] = anon_sym_AMP_AMP;
	v->a[39597] = anon_sym_PIPE_PIPE;
	v->a[39598] = anon_sym_LT;
	v->a[39599] = anon_sym_GT;
	small_parse_table_1980(v);
}

/* EOF small_parse_table_395.c */
