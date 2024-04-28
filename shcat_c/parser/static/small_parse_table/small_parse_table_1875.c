/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1875.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9375(t_small_parse_table_array *v)
{
	v->a[187500] = sym__special_character;
	v->a[187501] = anon_sym_DQUOTE;
	v->a[187502] = sym_raw_string;
	v->a[187503] = sym_ansi_c_string;
	v->a[187504] = anon_sym_DOLLAR_LBRACE;
	v->a[187505] = anon_sym_DOLLAR_BQUOTE;
	v->a[187506] = anon_sym_LT_LPAREN;
	v->a[187507] = anon_sym_GT_LPAREN;
	v->a[187508] = 5;
	v->a[187509] = actions(3);
	v->a[187510] = 1;
	v->a[187511] = sym_comment;
	v->a[187512] = actions(7820);
	v->a[187513] = 1;
	v->a[187514] = sym__special_character;
	v->a[187515] = state(3473);
	v->a[187516] = 1;
	v->a[187517] = aux_sym__literal_repeat1;
	v->a[187518] = actions(5395);
	v->a[187519] = 4;
	small_parse_table_9376(v);
}

void	small_parse_table_9376(t_small_parse_table_array *v)
{
	v->a[187520] = sym_file_descriptor;
	v->a[187521] = sym_test_operator;
	v->a[187522] = sym__brace_start;
	v->a[187523] = aux_sym_heredoc_redirect_token1;
	v->a[187524] = actions(5393);
	v->a[187525] = 29;
	v->a[187526] = anon_sym_LPAREN_LPAREN;
	v->a[187527] = anon_sym_PIPE_PIPE;
	v->a[187528] = anon_sym_AMP_AMP;
	v->a[187529] = anon_sym_LT;
	v->a[187530] = anon_sym_GT;
	v->a[187531] = anon_sym_GT_GT;
	v->a[187532] = anon_sym_AMP_GT;
	v->a[187533] = anon_sym_AMP_GT_GT;
	v->a[187534] = anon_sym_LT_AMP;
	v->a[187535] = anon_sym_GT_AMP;
	v->a[187536] = anon_sym_GT_PIPE;
	v->a[187537] = anon_sym_LT_AMP_DASH;
	v->a[187538] = anon_sym_GT_AMP_DASH;
	v->a[187539] = anon_sym_LT_LT_LT;
	small_parse_table_9377(v);
}

void	small_parse_table_9377(t_small_parse_table_array *v)
{
	v->a[187540] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[187541] = anon_sym_DOLLAR_LBRACK;
	v->a[187542] = anon_sym_DOLLAR;
	v->a[187543] = anon_sym_DQUOTE;
	v->a[187544] = sym_raw_string;
	v->a[187545] = sym_ansi_c_string;
	v->a[187546] = aux_sym_number_token1;
	v->a[187547] = aux_sym_number_token2;
	v->a[187548] = anon_sym_DOLLAR_LBRACE;
	v->a[187549] = anon_sym_DOLLAR_LPAREN;
	v->a[187550] = anon_sym_BQUOTE;
	v->a[187551] = anon_sym_DOLLAR_BQUOTE;
	v->a[187552] = anon_sym_LT_LPAREN;
	v->a[187553] = anon_sym_GT_LPAREN;
	v->a[187554] = sym_word;
	v->a[187555] = 25;
	v->a[187556] = actions(71);
	v->a[187557] = 1;
	v->a[187558] = sym_comment;
	v->a[187559] = actions(7781);
	small_parse_table_9378(v);
}

void	small_parse_table_9378(t_small_parse_table_array *v)
{
	v->a[187560] = 1;
	v->a[187561] = anon_sym_LPAREN;
	v->a[187562] = actions(7783);
	v->a[187563] = 1;
	v->a[187564] = anon_sym_DOLLAR_LBRACK;
	v->a[187565] = actions(7785);
	v->a[187566] = 1;
	v->a[187567] = anon_sym_DOLLAR;
	v->a[187568] = actions(7787);
	v->a[187569] = 1;
	v->a[187570] = sym__special_character;
	v->a[187571] = actions(7789);
	v->a[187572] = 1;
	v->a[187573] = anon_sym_DQUOTE;
	v->a[187574] = actions(7793);
	v->a[187575] = 1;
	v->a[187576] = aux_sym_number_token1;
	v->a[187577] = actions(7795);
	v->a[187578] = 1;
	v->a[187579] = aux_sym_number_token2;
	small_parse_table_9379(v);
}

void	small_parse_table_9379(t_small_parse_table_array *v)
{
	v->a[187580] = actions(7797);
	v->a[187581] = 1;
	v->a[187582] = anon_sym_DOLLAR_LBRACE;
	v->a[187583] = actions(7801);
	v->a[187584] = 1;
	v->a[187585] = anon_sym_DOLLAR_LPAREN;
	v->a[187586] = actions(7803);
	v->a[187587] = 1;
	v->a[187588] = anon_sym_BQUOTE;
	v->a[187589] = actions(7805);
	v->a[187590] = 1;
	v->a[187591] = anon_sym_DOLLAR_BQUOTE;
	v->a[187592] = actions(7809);
	v->a[187593] = 1;
	v->a[187594] = sym_variable_name;
	v->a[187595] = actions(7815);
	v->a[187596] = 1;
	v->a[187597] = sym__brace_start;
	v->a[187598] = actions(7822);
	v->a[187599] = 1;
	small_parse_table_9380(v);
}

/* EOF small_parse_table_1875.c */
