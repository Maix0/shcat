/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_705.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3525(t_small_parse_table_array *v)
{
	v->a[70500] = anon_sym_PERCENT_EQ;
	v->a[70501] = anon_sym_LT_LT_EQ;
	v->a[70502] = anon_sym_GT_GT_EQ;
	v->a[70503] = anon_sym_AMP_EQ;
	v->a[70504] = anon_sym_CARET_EQ;
	v->a[70505] = anon_sym_PIPE_EQ;
	v->a[70506] = anon_sym_EQ_EQ;
	v->a[70507] = anon_sym_BANG_EQ;
	v->a[70508] = anon_sym_LT_EQ;
	v->a[70509] = anon_sym_GT_EQ;
	v->a[70510] = anon_sym_QMARK;
	v->a[70511] = anon_sym_COLON;
	v->a[70512] = anon_sym_PLUS_PLUS2;
	v->a[70513] = anon_sym_DASH_DASH2;
	v->a[70514] = 3;
	v->a[70515] = actions(57);
	v->a[70516] = 1;
	v->a[70517] = sym_comment;
	v->a[70518] = actions(3157);
	v->a[70519] = 14;
	small_parse_table_3526(v);
}

void	small_parse_table_3526(t_small_parse_table_array *v)
{
	v->a[70520] = anon_sym_PIPE;
	v->a[70521] = anon_sym_LT;
	v->a[70522] = anon_sym_GT;
	v->a[70523] = anon_sym_AMP_GT;
	v->a[70524] = anon_sym_LT_AMP;
	v->a[70525] = anon_sym_GT_AMP;
	v->a[70526] = anon_sym_LT_LT;
	v->a[70527] = anon_sym_DOLLAR;
	v->a[70528] = aux_sym_number_token1;
	v->a[70529] = aux_sym_number_token2;
	v->a[70530] = anon_sym_DOLLAR_LPAREN;
	v->a[70531] = anon_sym_BQUOTE;
	v->a[70532] = aux_sym__simple_variable_name_token1;
	v->a[70533] = sym_word;
	v->a[70534] = actions(3159);
	v->a[70535] = 21;
	v->a[70536] = sym_file_descriptor;
	v->a[70537] = sym__concat;
	v->a[70538] = sym_variable_name;
	v->a[70539] = sym_test_operator;
	small_parse_table_3527(v);
}

void	small_parse_table_3527(t_small_parse_table_array *v)
{
	v->a[70540] = sym__brace_start;
	v->a[70541] = anon_sym_PIPE_AMP;
	v->a[70542] = anon_sym_AMP_AMP;
	v->a[70543] = anon_sym_PIPE_PIPE;
	v->a[70544] = anon_sym_GT_GT;
	v->a[70545] = anon_sym_AMP_GT_GT;
	v->a[70546] = anon_sym_GT_PIPE;
	v->a[70547] = anon_sym_LT_AMP_DASH;
	v->a[70548] = anon_sym_GT_AMP_DASH;
	v->a[70549] = anon_sym_LT_LT_DASH;
	v->a[70550] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70551] = aux_sym_concatenation_token1;
	v->a[70552] = sym__special_character;
	v->a[70553] = anon_sym_DQUOTE;
	v->a[70554] = sym_raw_string;
	v->a[70555] = anon_sym_DOLLAR_LBRACE;
	v->a[70556] = anon_sym_DOLLAR_BQUOTE;
	v->a[70557] = 5;
	v->a[70558] = actions(57);
	v->a[70559] = 1;
	small_parse_table_3528(v);
}

void	small_parse_table_3528(t_small_parse_table_array *v)
{
	v->a[70560] = sym_comment;
	v->a[70561] = state(1437);
	v->a[70562] = 1;
	v->a[70563] = aux_sym_concatenation_repeat1;
	v->a[70564] = actions(4223);
	v->a[70565] = 2;
	v->a[70566] = sym__concat;
	v->a[70567] = aux_sym_concatenation_token1;
	v->a[70568] = actions(2717);
	v->a[70569] = 13;
	v->a[70570] = anon_sym_PIPE;
	v->a[70571] = anon_sym_LT;
	v->a[70572] = anon_sym_GT;
	v->a[70573] = anon_sym_AMP_GT;
	v->a[70574] = anon_sym_LT_AMP;
	v->a[70575] = anon_sym_GT_AMP;
	v->a[70576] = anon_sym_LT_LT;
	v->a[70577] = anon_sym_DOLLAR;
	v->a[70578] = aux_sym_number_token1;
	v->a[70579] = aux_sym_number_token2;
	small_parse_table_3529(v);
}

void	small_parse_table_3529(t_small_parse_table_array *v)
{
	v->a[70580] = anon_sym_DOLLAR_LPAREN;
	v->a[70581] = anon_sym_BQUOTE;
	v->a[70582] = sym_word;
	v->a[70583] = actions(2719);
	v->a[70584] = 19;
	v->a[70585] = sym_file_descriptor;
	v->a[70586] = sym_variable_name;
	v->a[70587] = sym_test_operator;
	v->a[70588] = sym__brace_start;
	v->a[70589] = anon_sym_PIPE_AMP;
	v->a[70590] = anon_sym_AMP_AMP;
	v->a[70591] = anon_sym_PIPE_PIPE;
	v->a[70592] = anon_sym_GT_GT;
	v->a[70593] = anon_sym_AMP_GT_GT;
	v->a[70594] = anon_sym_GT_PIPE;
	v->a[70595] = anon_sym_LT_AMP_DASH;
	v->a[70596] = anon_sym_GT_AMP_DASH;
	v->a[70597] = anon_sym_LT_LT_DASH;
	v->a[70598] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70599] = sym__special_character;
	small_parse_table_3530(v);
}

/* EOF small_parse_table_705.c */
