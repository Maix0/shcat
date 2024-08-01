/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_505.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2525(t_small_parse_table_array *v)
{
	v->a[50500] = actions(2503);
	v->a[50501] = 1;
	v->a[50502] = anon_sym_RBRACE;
	v->a[50503] = state(1676);
	v->a[50504] = 1;
	v->a[50505] = sym__expansion_body;
	v->a[50506] = actions(2275);
	v->a[50507] = 6;
	v->a[50508] = anon_sym_BANG;
	v->a[50509] = anon_sym_DASH;
	v->a[50510] = anon_sym_STAR;
	v->a[50511] = anon_sym_QMARK;
	v->a[50512] = anon_sym_DOLLAR;
	v->a[50513] = anon_sym_AT;
	v->a[50514] = 8;
	v->a[50515] = actions(3);
	v->a[50516] = 1;
	v->a[50517] = sym_comment;
	v->a[50518] = actions(2277);
	v->a[50519] = 1;
	small_parse_table_2526(v);
}

void	small_parse_table_2526(t_small_parse_table_array *v)
{
	v->a[50520] = anon_sym_POUND;
	v->a[50521] = actions(2279);
	v->a[50522] = 1;
	v->a[50523] = aux_sym__simple_variable_name_token1;
	v->a[50524] = actions(2281);
	v->a[50525] = 1;
	v->a[50526] = anon_sym_0;
	v->a[50527] = actions(2283);
	v->a[50528] = 1;
	v->a[50529] = sym_variable_name;
	v->a[50530] = actions(2505);
	v->a[50531] = 1;
	v->a[50532] = anon_sym_RBRACE;
	v->a[50533] = state(1670);
	v->a[50534] = 1;
	v->a[50535] = sym__expansion_body;
	v->a[50536] = actions(2275);
	v->a[50537] = 6;
	v->a[50538] = anon_sym_BANG;
	v->a[50539] = anon_sym_DASH;
	small_parse_table_2527(v);
}

void	small_parse_table_2527(t_small_parse_table_array *v)
{
	v->a[50540] = anon_sym_STAR;
	v->a[50541] = anon_sym_QMARK;
	v->a[50542] = anon_sym_DOLLAR;
	v->a[50543] = anon_sym_AT;
	v->a[50544] = 10;
	v->a[50545] = actions(3);
	v->a[50546] = 1;
	v->a[50547] = sym_comment;
	v->a[50548] = actions(2293);
	v->a[50549] = 1;
	v->a[50550] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50551] = actions(2299);
	v->a[50552] = 1;
	v->a[50553] = sym_string_content;
	v->a[50554] = actions(2301);
	v->a[50555] = 1;
	v->a[50556] = anon_sym_DOLLAR_LBRACE;
	v->a[50557] = actions(2303);
	v->a[50558] = 1;
	v->a[50559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2528(v);
}

void	small_parse_table_2528(t_small_parse_table_array *v)
{
	v->a[50560] = actions(2305);
	v->a[50561] = 1;
	v->a[50562] = anon_sym_BQUOTE;
	v->a[50563] = actions(2507);
	v->a[50564] = 1;
	v->a[50565] = anon_sym_DOLLAR;
	v->a[50566] = actions(2509);
	v->a[50567] = 1;
	v->a[50568] = anon_sym_DQUOTE;
	v->a[50569] = state(1150);
	v->a[50570] = 1;
	v->a[50571] = aux_sym_string_repeat1;
	v->a[50572] = state(1394);
	v->a[50573] = 4;
	v->a[50574] = sym_arithmetic_expansion;
	v->a[50575] = sym_simple_expansion;
	v->a[50576] = sym_expansion;
	v->a[50577] = sym_command_substitution;
	v->a[50578] = 5;
	v->a[50579] = actions(3);
	small_parse_table_2529(v);
}

void	small_parse_table_2529(t_small_parse_table_array *v)
{
	v->a[50580] = 1;
	v->a[50581] = sym_comment;
	v->a[50582] = actions(1974);
	v->a[50583] = 1;
	v->a[50584] = aux_sym_heredoc_redirect_token1;
	v->a[50585] = actions(2511);
	v->a[50586] = 1;
	v->a[50587] = anon_sym_PIPE;
	v->a[50588] = state(1154);
	v->a[50589] = 1;
	v->a[50590] = aux_sym_pipeline_repeat1;
	v->a[50591] = actions(1979);
	v->a[50592] = 9;
	v->a[50593] = anon_sym_RPAREN;
	v->a[50594] = anon_sym_SEMI_SEMI;
	v->a[50595] = anon_sym_AMP_AMP;
	v->a[50596] = anon_sym_PIPE_PIPE;
	v->a[50597] = anon_sym_LT;
	v->a[50598] = anon_sym_GT;
	v->a[50599] = anon_sym_GT_GT;
	small_parse_table_2530(v);
}

/* EOF small_parse_table_505.c */
