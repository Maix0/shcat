/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_635.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3175(t_small_parse_table_array *v)
{
	v->a[63500] = aux_sym_heredoc_redirect_token1;
	v->a[63501] = actions(2688);
	v->a[63502] = 29;
	v->a[63503] = anon_sym_PIPE;
	v->a[63504] = anon_sym_PIPE_AMP;
	v->a[63505] = anon_sym_AMP_AMP;
	v->a[63506] = anon_sym_PIPE_PIPE;
	v->a[63507] = anon_sym_LT;
	v->a[63508] = anon_sym_GT;
	v->a[63509] = anon_sym_GT_GT;
	v->a[63510] = anon_sym_AMP_GT;
	v->a[63511] = anon_sym_AMP_GT_GT;
	v->a[63512] = anon_sym_LT_AMP;
	v->a[63513] = anon_sym_GT_AMP;
	v->a[63514] = anon_sym_GT_PIPE;
	v->a[63515] = anon_sym_LT_AMP_DASH;
	v->a[63516] = anon_sym_GT_AMP_DASH;
	v->a[63517] = anon_sym_LT_LT;
	v->a[63518] = anon_sym_LT_LT_DASH;
	v->a[63519] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3176(v);
}

void	small_parse_table_3176(t_small_parse_table_array *v)
{
	v->a[63520] = anon_sym_DOLLAR;
	v->a[63521] = sym__special_character;
	v->a[63522] = anon_sym_DQUOTE;
	v->a[63523] = sym_raw_string;
	v->a[63524] = aux_sym_number_token1;
	v->a[63525] = aux_sym_number_token2;
	v->a[63526] = anon_sym_DOLLAR_LBRACE;
	v->a[63527] = anon_sym_DOLLAR_LPAREN;
	v->a[63528] = anon_sym_BQUOTE;
	v->a[63529] = anon_sym_DOLLAR_BQUOTE;
	v->a[63530] = aux_sym__simple_variable_name_token1;
	v->a[63531] = sym_word;
	v->a[63532] = 6;
	v->a[63533] = actions(3);
	v->a[63534] = 1;
	v->a[63535] = sym_comment;
	v->a[63536] = actions(3442);
	v->a[63537] = 1;
	v->a[63538] = aux_sym_concatenation_token1;
	v->a[63539] = actions(3572);
	small_parse_table_3177(v);
}

void	small_parse_table_3177(t_small_parse_table_array *v)
{
	v->a[63540] = 1;
	v->a[63541] = sym__concat;
	v->a[63542] = state(1359);
	v->a[63543] = 1;
	v->a[63544] = aux_sym_concatenation_repeat1;
	v->a[63545] = actions(2664);
	v->a[63546] = 4;
	v->a[63547] = sym_file_descriptor;
	v->a[63548] = sym_test_operator;
	v->a[63549] = sym__brace_start;
	v->a[63550] = aux_sym_heredoc_redirect_token1;
	v->a[63551] = actions(2662);
	v->a[63552] = 29;
	v->a[63553] = anon_sym_PIPE;
	v->a[63554] = anon_sym_PIPE_AMP;
	v->a[63555] = anon_sym_AMP_AMP;
	v->a[63556] = anon_sym_PIPE_PIPE;
	v->a[63557] = anon_sym_LT;
	v->a[63558] = anon_sym_GT;
	v->a[63559] = anon_sym_GT_GT;
	small_parse_table_3178(v);
}

void	small_parse_table_3178(t_small_parse_table_array *v)
{
	v->a[63560] = anon_sym_AMP_GT;
	v->a[63561] = anon_sym_AMP_GT_GT;
	v->a[63562] = anon_sym_LT_AMP;
	v->a[63563] = anon_sym_GT_AMP;
	v->a[63564] = anon_sym_GT_PIPE;
	v->a[63565] = anon_sym_LT_AMP_DASH;
	v->a[63566] = anon_sym_GT_AMP_DASH;
	v->a[63567] = anon_sym_LT_LT;
	v->a[63568] = anon_sym_LT_LT_DASH;
	v->a[63569] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63570] = anon_sym_DOLLAR;
	v->a[63571] = sym__special_character;
	v->a[63572] = anon_sym_DQUOTE;
	v->a[63573] = sym_raw_string;
	v->a[63574] = aux_sym_number_token1;
	v->a[63575] = aux_sym_number_token2;
	v->a[63576] = anon_sym_DOLLAR_LBRACE;
	v->a[63577] = anon_sym_DOLLAR_LPAREN;
	v->a[63578] = anon_sym_BQUOTE;
	v->a[63579] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_3179(v);
}

void	small_parse_table_3179(t_small_parse_table_array *v)
{
	v->a[63580] = aux_sym__simple_variable_name_token1;
	v->a[63581] = sym_word;
	v->a[63582] = 5;
	v->a[63583] = actions(57);
	v->a[63584] = 1;
	v->a[63585] = sym_comment;
	v->a[63586] = state(1370);
	v->a[63587] = 1;
	v->a[63588] = aux_sym_concatenation_repeat1;
	v->a[63589] = actions(4056);
	v->a[63590] = 2;
	v->a[63591] = sym__concat;
	v->a[63592] = aux_sym_concatenation_token1;
	v->a[63593] = actions(2717);
	v->a[63594] = 14;
	v->a[63595] = anon_sym_PIPE;
	v->a[63596] = anon_sym_LT;
	v->a[63597] = anon_sym_GT;
	v->a[63598] = anon_sym_AMP_GT;
	v->a[63599] = anon_sym_LT_AMP;
	small_parse_table_3180(v);
}

/* EOF small_parse_table_635.c */
