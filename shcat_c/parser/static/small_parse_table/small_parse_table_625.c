/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_625.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3125(t_small_parse_table_array *v)
{
	v->a[62500] = anon_sym_LT_LT_LT;
	v->a[62501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62502] = anon_sym_DOLLAR_LBRACK;
	v->a[62503] = anon_sym_DOLLAR;
	v->a[62504] = anon_sym_DQUOTE;
	v->a[62505] = sym_raw_string;
	v->a[62506] = sym_ansi_c_string;
	v->a[62507] = aux_sym_number_token1;
	v->a[62508] = aux_sym_number_token2;
	v->a[62509] = anon_sym_DOLLAR_LBRACE;
	v->a[62510] = anon_sym_DOLLAR_LPAREN;
	v->a[62511] = anon_sym_BQUOTE;
	v->a[62512] = anon_sym_DOLLAR_BQUOTE;
	v->a[62513] = anon_sym_LT_LPAREN;
	v->a[62514] = anon_sym_GT_LPAREN;
	v->a[62515] = sym_word;
	v->a[62516] = 5;
	v->a[62517] = actions(3);
	v->a[62518] = 1;
	v->a[62519] = sym_comment;
	small_parse_table_3126(v);
}

void	small_parse_table_3126(t_small_parse_table_array *v)
{
	v->a[62520] = actions(5662);
	v->a[62521] = 1;
	v->a[62522] = sym__special_character;
	v->a[62523] = state(1433);
	v->a[62524] = 1;
	v->a[62525] = aux_sym__literal_repeat1;
	v->a[62526] = actions(4566);
	v->a[62527] = 5;
	v->a[62528] = sym_file_descriptor;
	v->a[62529] = sym_variable_name;
	v->a[62530] = sym_test_operator;
	v->a[62531] = sym__brace_start;
	v->a[62532] = aux_sym_heredoc_redirect_token1;
	v->a[62533] = actions(4564);
	v->a[62534] = 39;
	v->a[62535] = anon_sym_LPAREN_LPAREN;
	v->a[62536] = anon_sym_SEMI;
	v->a[62537] = anon_sym_PIPE_PIPE;
	v->a[62538] = anon_sym_AMP_AMP;
	v->a[62539] = anon_sym_PIPE;
	small_parse_table_3127(v);
}

void	small_parse_table_3127(t_small_parse_table_array *v)
{
	v->a[62540] = anon_sym_AMP;
	v->a[62541] = anon_sym_LT;
	v->a[62542] = anon_sym_GT;
	v->a[62543] = anon_sym_LT_LT;
	v->a[62544] = anon_sym_GT_GT;
	v->a[62545] = anon_sym_esac;
	v->a[62546] = anon_sym_SEMI_SEMI;
	v->a[62547] = anon_sym_SEMI_AMP;
	v->a[62548] = anon_sym_SEMI_SEMI_AMP;
	v->a[62549] = anon_sym_PIPE_AMP;
	v->a[62550] = anon_sym_AMP_GT;
	v->a[62551] = anon_sym_AMP_GT_GT;
	v->a[62552] = anon_sym_LT_AMP;
	v->a[62553] = anon_sym_GT_AMP;
	v->a[62554] = anon_sym_GT_PIPE;
	v->a[62555] = anon_sym_LT_AMP_DASH;
	v->a[62556] = anon_sym_GT_AMP_DASH;
	v->a[62557] = anon_sym_LT_LT_DASH;
	v->a[62558] = anon_sym_LT_LT_LT;
	v->a[62559] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3128(v);
}

void	small_parse_table_3128(t_small_parse_table_array *v)
{
	v->a[62560] = anon_sym_DOLLAR_LBRACK;
	v->a[62561] = anon_sym_DOLLAR;
	v->a[62562] = anon_sym_DQUOTE;
	v->a[62563] = sym_raw_string;
	v->a[62564] = sym_ansi_c_string;
	v->a[62565] = aux_sym_number_token1;
	v->a[62566] = aux_sym_number_token2;
	v->a[62567] = anon_sym_DOLLAR_LBRACE;
	v->a[62568] = anon_sym_DOLLAR_LPAREN;
	v->a[62569] = anon_sym_BQUOTE;
	v->a[62570] = anon_sym_DOLLAR_BQUOTE;
	v->a[62571] = anon_sym_LT_LPAREN;
	v->a[62572] = anon_sym_GT_LPAREN;
	v->a[62573] = sym_word;
	v->a[62574] = 6;
	v->a[62575] = actions(3);
	v->a[62576] = 1;
	v->a[62577] = sym_comment;
	v->a[62578] = actions(5540);
	v->a[62579] = 1;
	small_parse_table_3129(v);
}

void	small_parse_table_3129(t_small_parse_table_array *v)
{
	v->a[62580] = aux_sym_concatenation_token1;
	v->a[62581] = actions(5542);
	v->a[62582] = 1;
	v->a[62583] = sym__concat;
	v->a[62584] = state(1444);
	v->a[62585] = 1;
	v->a[62586] = aux_sym_concatenation_repeat1;
	v->a[62587] = actions(5391);
	v->a[62588] = 4;
	v->a[62589] = sym_file_descriptor;
	v->a[62590] = sym_test_operator;
	v->a[62591] = sym__brace_start;
	v->a[62592] = aux_sym_heredoc_redirect_token1;
	v->a[62593] = actions(5389);
	v->a[62594] = 39;
	v->a[62595] = anon_sym_LPAREN_LPAREN;
	v->a[62596] = anon_sym_SEMI;
	v->a[62597] = anon_sym_PIPE_PIPE;
	v->a[62598] = anon_sym_AMP_AMP;
	v->a[62599] = anon_sym_PIPE;
	small_parse_table_3130(v);
}

/* EOF small_parse_table_625.c */
