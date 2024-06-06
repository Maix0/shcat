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
	v->a[62500] = actions(4056);
	v->a[62501] = 1;
	v->a[62502] = aux_sym_concatenation_token1;
	v->a[62503] = actions(4058);
	v->a[62504] = 1;
	v->a[62505] = sym__concat;
	v->a[62506] = state(1340);
	v->a[62507] = 1;
	v->a[62508] = aux_sym_concatenation_repeat1;
	v->a[62509] = actions(2694);
	v->a[62510] = 14;
	v->a[62511] = anon_sym_PIPE;
	v->a[62512] = anon_sym_LT;
	v->a[62513] = anon_sym_GT;
	v->a[62514] = anon_sym_AMP_GT;
	v->a[62515] = anon_sym_LT_AMP;
	v->a[62516] = anon_sym_GT_AMP;
	v->a[62517] = anon_sym_LT_LT;
	v->a[62518] = anon_sym_DOLLAR;
	v->a[62519] = aux_sym_number_token1;
	small_parse_table_3126(v);
}

void	small_parse_table_3126(t_small_parse_table_array *v)
{
	v->a[62520] = aux_sym_number_token2;
	v->a[62521] = anon_sym_DOLLAR_LPAREN;
	v->a[62522] = anon_sym_BQUOTE;
	v->a[62523] = aux_sym__simple_variable_name_token1;
	v->a[62524] = sym_word;
	v->a[62525] = actions(2696);
	v->a[62526] = 19;
	v->a[62527] = sym_file_descriptor;
	v->a[62528] = sym_variable_name;
	v->a[62529] = sym_test_operator;
	v->a[62530] = sym__brace_start;
	v->a[62531] = anon_sym_PIPE_AMP;
	v->a[62532] = anon_sym_AMP_AMP;
	v->a[62533] = anon_sym_PIPE_PIPE;
	v->a[62534] = anon_sym_GT_GT;
	v->a[62535] = anon_sym_AMP_GT_GT;
	v->a[62536] = anon_sym_GT_PIPE;
	v->a[62537] = anon_sym_LT_AMP_DASH;
	v->a[62538] = anon_sym_GT_AMP_DASH;
	v->a[62539] = anon_sym_LT_LT_DASH;
	small_parse_table_3127(v);
}

void	small_parse_table_3127(t_small_parse_table_array *v)
{
	v->a[62540] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62541] = sym__special_character;
	v->a[62542] = anon_sym_DQUOTE;
	v->a[62543] = sym_raw_string;
	v->a[62544] = anon_sym_DOLLAR_LBRACE;
	v->a[62545] = anon_sym_DOLLAR_BQUOTE;
	v->a[62546] = 6;
	v->a[62547] = actions(3);
	v->a[62548] = 1;
	v->a[62549] = sym_comment;
	v->a[62550] = actions(3423);
	v->a[62551] = 1;
	v->a[62552] = aux_sym_concatenation_token1;
	v->a[62553] = actions(3425);
	v->a[62554] = 1;
	v->a[62555] = sym__concat;
	v->a[62556] = state(1339);
	v->a[62557] = 1;
	v->a[62558] = aux_sym_concatenation_repeat1;
	v->a[62559] = actions(2664);
	small_parse_table_3128(v);
}

void	small_parse_table_3128(t_small_parse_table_array *v)
{
	v->a[62560] = 5;
	v->a[62561] = sym_file_descriptor;
	v->a[62562] = sym_variable_name;
	v->a[62563] = sym_test_operator;
	v->a[62564] = sym__brace_start;
	v->a[62565] = aux_sym_heredoc_redirect_token1;
	v->a[62566] = actions(2662);
	v->a[62567] = 28;
	v->a[62568] = anon_sym_PIPE;
	v->a[62569] = anon_sym_PIPE_AMP;
	v->a[62570] = anon_sym_AMP_AMP;
	v->a[62571] = anon_sym_PIPE_PIPE;
	v->a[62572] = anon_sym_LT;
	v->a[62573] = anon_sym_GT;
	v->a[62574] = anon_sym_GT_GT;
	v->a[62575] = anon_sym_AMP_GT;
	v->a[62576] = anon_sym_AMP_GT_GT;
	v->a[62577] = anon_sym_LT_AMP;
	v->a[62578] = anon_sym_GT_AMP;
	v->a[62579] = anon_sym_GT_PIPE;
	small_parse_table_3129(v);
}

void	small_parse_table_3129(t_small_parse_table_array *v)
{
	v->a[62580] = anon_sym_LT_AMP_DASH;
	v->a[62581] = anon_sym_GT_AMP_DASH;
	v->a[62582] = anon_sym_LT_LT;
	v->a[62583] = anon_sym_LT_LT_DASH;
	v->a[62584] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62585] = anon_sym_DOLLAR;
	v->a[62586] = sym__special_character;
	v->a[62587] = anon_sym_DQUOTE;
	v->a[62588] = sym_raw_string;
	v->a[62589] = aux_sym_number_token1;
	v->a[62590] = aux_sym_number_token2;
	v->a[62591] = anon_sym_DOLLAR_LBRACE;
	v->a[62592] = anon_sym_DOLLAR_LPAREN;
	v->a[62593] = anon_sym_BQUOTE;
	v->a[62594] = anon_sym_DOLLAR_BQUOTE;
	v->a[62595] = sym_word;
	v->a[62596] = 6;
	v->a[62597] = actions(57);
	v->a[62598] = 1;
	v->a[62599] = sym_comment;
	small_parse_table_3130(v);
}

/* EOF small_parse_table_625.c */
