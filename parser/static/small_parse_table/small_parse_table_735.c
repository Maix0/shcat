/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_735.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3675(t_small_parse_table_array *v)
{
	v->a[73500] = aux_sym_number_token2;
	v->a[73501] = anon_sym_DOLLAR_LPAREN;
	v->a[73502] = anon_sym_BQUOTE;
	v->a[73503] = aux_sym__simple_variable_name_token1;
	v->a[73504] = sym_word;
	v->a[73505] = actions(2888);
	v->a[73506] = 20;
	v->a[73507] = sym_file_descriptor;
	v->a[73508] = sym__concat;
	v->a[73509] = sym_test_operator;
	v->a[73510] = sym__brace_start;
	v->a[73511] = anon_sym_PIPE_AMP;
	v->a[73512] = anon_sym_AMP_AMP;
	v->a[73513] = anon_sym_PIPE_PIPE;
	v->a[73514] = anon_sym_GT_GT;
	v->a[73515] = anon_sym_AMP_GT_GT;
	v->a[73516] = anon_sym_GT_PIPE;
	v->a[73517] = anon_sym_LT_AMP_DASH;
	v->a[73518] = anon_sym_GT_AMP_DASH;
	v->a[73519] = anon_sym_LT_LT_DASH;
	small_parse_table_3676(v);
}

void	small_parse_table_3676(t_small_parse_table_array *v)
{
	v->a[73520] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73521] = aux_sym_concatenation_token1;
	v->a[73522] = sym__special_character;
	v->a[73523] = anon_sym_DQUOTE;
	v->a[73524] = sym_raw_string;
	v->a[73525] = anon_sym_DOLLAR_LBRACE;
	v->a[73526] = anon_sym_DOLLAR_BQUOTE;
	v->a[73527] = 6;
	v->a[73528] = actions(3);
	v->a[73529] = 1;
	v->a[73530] = sym_comment;
	v->a[73531] = actions(828);
	v->a[73532] = 1;
	v->a[73533] = sym_file_descriptor;
	v->a[73534] = actions(4412);
	v->a[73535] = 1;
	v->a[73536] = sym_variable_name;
	v->a[73537] = actions(4410);
	v->a[73538] = 2;
	v->a[73539] = aux_sym__simple_variable_name_token1;
	small_parse_table_3677(v);
}

void	small_parse_table_3677(t_small_parse_table_array *v)
{
	v->a[73540] = aux_sym__multiline_variable_name_token1;
	v->a[73541] = actions(4408);
	v->a[73542] = 9;
	v->a[73543] = anon_sym_BANG;
	v->a[73544] = anon_sym_DASH;
	v->a[73545] = anon_sym_STAR;
	v->a[73546] = anon_sym_QMARK;
	v->a[73547] = anon_sym_DOLLAR;
	v->a[73548] = anon_sym_POUND;
	v->a[73549] = anon_sym_AT;
	v->a[73550] = anon_sym_0;
	v->a[73551] = anon_sym__;
	v->a[73552] = actions(826);
	v->a[73553] = 21;
	v->a[73554] = anon_sym_PIPE;
	v->a[73555] = anon_sym_SEMI_SEMI;
	v->a[73556] = anon_sym_PIPE_AMP;
	v->a[73557] = anon_sym_AMP_AMP;
	v->a[73558] = anon_sym_PIPE_PIPE;
	v->a[73559] = anon_sym_LT;
	small_parse_table_3678(v);
}

void	small_parse_table_3678(t_small_parse_table_array *v)
{
	v->a[73560] = anon_sym_GT;
	v->a[73561] = anon_sym_GT_GT;
	v->a[73562] = anon_sym_AMP_GT;
	v->a[73563] = anon_sym_AMP_GT_GT;
	v->a[73564] = anon_sym_LT_AMP;
	v->a[73565] = anon_sym_GT_AMP;
	v->a[73566] = anon_sym_GT_PIPE;
	v->a[73567] = anon_sym_LT_AMP_DASH;
	v->a[73568] = anon_sym_GT_AMP_DASH;
	v->a[73569] = anon_sym_LT_LT;
	v->a[73570] = anon_sym_LT_LT_DASH;
	v->a[73571] = aux_sym_heredoc_redirect_token1;
	v->a[73572] = anon_sym_AMP;
	v->a[73573] = anon_sym_BQUOTE;
	v->a[73574] = anon_sym_SEMI;
	v->a[73575] = 3;
	v->a[73576] = actions(57);
	v->a[73577] = 1;
	v->a[73578] = sym_comment;
	v->a[73579] = actions(3064);
	small_parse_table_3679(v);
}

void	small_parse_table_3679(t_small_parse_table_array *v)
{
	v->a[73580] = 13;
	v->a[73581] = anon_sym_PIPE;
	v->a[73582] = anon_sym_LT;
	v->a[73583] = anon_sym_GT;
	v->a[73584] = anon_sym_AMP_GT;
	v->a[73585] = anon_sym_LT_AMP;
	v->a[73586] = anon_sym_GT_AMP;
	v->a[73587] = anon_sym_LT_LT;
	v->a[73588] = anon_sym_DOLLAR;
	v->a[73589] = aux_sym_number_token1;
	v->a[73590] = aux_sym_number_token2;
	v->a[73591] = anon_sym_DOLLAR_LPAREN;
	v->a[73592] = anon_sym_BQUOTE;
	v->a[73593] = sym_word;
	v->a[73594] = actions(3066);
	v->a[73595] = 21;
	v->a[73596] = sym_file_descriptor;
	v->a[73597] = sym__concat;
	v->a[73598] = sym_test_operator;
	v->a[73599] = sym__bare_dollar;
	small_parse_table_3680(v);
}

/* EOF small_parse_table_735.c */
