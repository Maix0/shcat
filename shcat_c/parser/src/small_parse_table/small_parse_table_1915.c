/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1915.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9575(t_small_parse_table_array *v)
{
	v->a[191500] = 2;
	v->a[191501] = anon_sym_COMMA;
	v->a[191502] = anon_sym_CARET;
	v->a[191503] = actions(8048);
	v->a[191504] = 2;
	v->a[191505] = anon_sym_COMMA_COMMA;
	v->a[191506] = anon_sym_CARET_CARET;
	v->a[191507] = actions(8036);
	v->a[191508] = 3;
	v->a[191509] = sym__immediate_double_hash;
	v->a[191510] = anon_sym_POUND;
	v->a[191511] = anon_sym_PERCENT_PERCENT;
	v->a[191512] = actions(8046);
	v->a[191513] = 3;
	v->a[191514] = anon_sym_SLASH_SLASH;
	v->a[191515] = anon_sym_SLASH_POUND;
	v->a[191516] = anon_sym_SLASH_PERCENT;
	v->a[191517] = actions(8050);
	v->a[191518] = 3;
	v->a[191519] = sym__external_expansion_sym_hash;
	small_parse_table_9576(v);
}

void	small_parse_table_9576(t_small_parse_table_array *v)
{
	v->a[191520] = sym__external_expansion_sym_bang;
	v->a[191521] = sym__external_expansion_sym_equal;
	v->a[191522] = actions(8044);
	v->a[191523] = 8;
	v->a[191524] = anon_sym_EQ2;
	v->a[191525] = anon_sym_COLON_EQ;
	v->a[191526] = anon_sym_DASH3;
	v->a[191527] = anon_sym_COLON_DASH;
	v->a[191528] = anon_sym_PLUS3;
	v->a[191529] = anon_sym_COLON_PLUS;
	v->a[191530] = anon_sym_QMARK2;
	v->a[191531] = anon_sym_COLON_QMARK;
	v->a[191532] = 19;
	v->a[191533] = actions(3);
	v->a[191534] = 1;
	v->a[191535] = sym_comment;
	v->a[191536] = actions(8030);
	v->a[191537] = 1;
	v->a[191538] = anon_sym_SLASH;
	v->a[191539] = actions(8032);
	small_parse_table_9577(v);
}

void	small_parse_table_9577(t_small_parse_table_array *v)
{
	v->a[191540] = 1;
	v->a[191541] = anon_sym_PERCENT;
	v->a[191542] = actions(8034);
	v->a[191543] = 1;
	v->a[191544] = anon_sym_COLON;
	v->a[191545] = actions(8038);
	v->a[191546] = 1;
	v->a[191547] = anon_sym_RBRACE3;
	v->a[191548] = actions(8546);
	v->a[191549] = 1;
	v->a[191550] = anon_sym_AT;
	v->a[191551] = state(6390);
	v->a[191552] = 1;
	v->a[191553] = aux_sym__expansion_body_repeat1;
	v->a[191554] = state(6959);
	v->a[191555] = 1;
	v->a[191556] = sym__expansion_operator;
	v->a[191557] = state(6960);
	v->a[191558] = 1;
	v->a[191559] = sym__expansion_max_length;
	small_parse_table_9578(v);
}

void	small_parse_table_9578(t_small_parse_table_array *v)
{
	v->a[191560] = state(6964);
	v->a[191561] = 1;
	v->a[191562] = sym__expansion_regex_removal;
	v->a[191563] = state(6965);
	v->a[191564] = 1;
	v->a[191565] = sym__expansion_regex_replacement;
	v->a[191566] = state(6966);
	v->a[191567] = 1;
	v->a[191568] = sym__expansion_regex;
	v->a[191569] = state(6967);
	v->a[191570] = 1;
	v->a[191571] = sym__expansion_expression;
	v->a[191572] = actions(8028);
	v->a[191573] = 2;
	v->a[191574] = anon_sym_COMMA;
	v->a[191575] = anon_sym_CARET;
	v->a[191576] = actions(8048);
	v->a[191577] = 2;
	v->a[191578] = anon_sym_COMMA_COMMA;
	v->a[191579] = anon_sym_CARET_CARET;
	small_parse_table_9579(v);
}

void	small_parse_table_9579(t_small_parse_table_array *v)
{
	v->a[191580] = actions(8036);
	v->a[191581] = 3;
	v->a[191582] = sym__immediate_double_hash;
	v->a[191583] = anon_sym_POUND;
	v->a[191584] = anon_sym_PERCENT_PERCENT;
	v->a[191585] = actions(8046);
	v->a[191586] = 3;
	v->a[191587] = anon_sym_SLASH_SLASH;
	v->a[191588] = anon_sym_SLASH_POUND;
	v->a[191589] = anon_sym_SLASH_PERCENT;
	v->a[191590] = actions(8050);
	v->a[191591] = 3;
	v->a[191592] = sym__external_expansion_sym_hash;
	v->a[191593] = sym__external_expansion_sym_bang;
	v->a[191594] = sym__external_expansion_sym_equal;
	v->a[191595] = actions(8044);
	v->a[191596] = 8;
	v->a[191597] = anon_sym_EQ2;
	v->a[191598] = anon_sym_COLON_EQ;
	v->a[191599] = anon_sym_DASH3;
	small_parse_table_9580(v);
}

/* EOF small_parse_table_1915.c */
