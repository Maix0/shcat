/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2755.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13775(t_small_parse_table_array *v)
{
	v->a[275500] = anon_sym_AMP_AMP;
	v->a[275501] = anon_sym_PIPE;
	v->a[275502] = anon_sym_LT;
	v->a[275503] = anon_sym_GT;
	v->a[275504] = anon_sym_LT_LT;
	v->a[275505] = anon_sym_GT_GT;
	v->a[275506] = anon_sym_PIPE_AMP;
	v->a[275507] = anon_sym_AMP_GT;
	v->a[275508] = anon_sym_AMP_GT_GT;
	v->a[275509] = anon_sym_LT_AMP;
	v->a[275510] = anon_sym_GT_AMP;
	v->a[275511] = anon_sym_GT_PIPE;
	v->a[275512] = anon_sym_LT_AMP_DASH;
	v->a[275513] = anon_sym_GT_AMP_DASH;
	v->a[275514] = anon_sym_LT_LT_DASH;
	v->a[275515] = anon_sym_LT_LT_LT;
	v->a[275516] = 4;
	v->a[275517] = actions(71);
	v->a[275518] = 1;
	v->a[275519] = sym_comment;
	small_parse_table_13776(v);
}

void	small_parse_table_13776(t_small_parse_table_array *v)
{
	v->a[275520] = actions(12372);
	v->a[275521] = 1;
	v->a[275522] = anon_sym_esac;
	v->a[275523] = actions(12368);
	v->a[275524] = 6;
	v->a[275525] = anon_sym_LPAREN;
	v->a[275526] = anon_sym_DOLLAR;
	v->a[275527] = aux_sym_number_token1;
	v->a[275528] = aux_sym_number_token2;
	v->a[275529] = anon_sym_DOLLAR_LPAREN;
	v->a[275530] = sym_word;
	v->a[275531] = actions(12370);
	v->a[275532] = 15;
	v->a[275533] = sym_test_operator;
	v->a[275534] = sym_extglob_pattern;
	v->a[275535] = sym__brace_start;
	v->a[275536] = anon_sym_LPAREN_LPAREN;
	v->a[275537] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[275538] = anon_sym_DOLLAR_LBRACK;
	v->a[275539] = sym__special_character;
	small_parse_table_13777(v);
}

void	small_parse_table_13777(t_small_parse_table_array *v)
{
	v->a[275540] = anon_sym_DQUOTE;
	v->a[275541] = sym_raw_string;
	v->a[275542] = sym_ansi_c_string;
	v->a[275543] = anon_sym_DOLLAR_LBRACE;
	v->a[275544] = anon_sym_BQUOTE;
	v->a[275545] = anon_sym_DOLLAR_BQUOTE;
	v->a[275546] = anon_sym_LT_LPAREN;
	v->a[275547] = anon_sym_GT_LPAREN;
	v->a[275548] = 6;
	v->a[275549] = actions(3);
	v->a[275550] = 1;
	v->a[275551] = sym_comment;
	v->a[275552] = actions(11512);
	v->a[275553] = 1;
	v->a[275554] = aux_sym_concatenation_token1;
	v->a[275555] = actions(11514);
	v->a[275556] = 1;
	v->a[275557] = sym__concat;
	v->a[275558] = state(5208);
	v->a[275559] = 1;
	small_parse_table_13778(v);
}

void	small_parse_table_13778(t_small_parse_table_array *v)
{
	v->a[275560] = aux_sym_concatenation_repeat1;
	v->a[275561] = actions(2074);
	v->a[275562] = 2;
	v->a[275563] = sym_file_descriptor;
	v->a[275564] = aux_sym_heredoc_redirect_token1;
	v->a[275565] = actions(2072);
	v->a[275566] = 17;
	v->a[275567] = anon_sym_PIPE_PIPE;
	v->a[275568] = anon_sym_AMP_AMP;
	v->a[275569] = anon_sym_PIPE;
	v->a[275570] = anon_sym_LT;
	v->a[275571] = anon_sym_GT;
	v->a[275572] = anon_sym_LT_LT;
	v->a[275573] = anon_sym_GT_GT;
	v->a[275574] = anon_sym_PIPE_AMP;
	v->a[275575] = anon_sym_AMP_GT;
	v->a[275576] = anon_sym_AMP_GT_GT;
	v->a[275577] = anon_sym_LT_AMP;
	v->a[275578] = anon_sym_GT_AMP;
	v->a[275579] = anon_sym_GT_PIPE;
	small_parse_table_13779(v);
}

void	small_parse_table_13779(t_small_parse_table_array *v)
{
	v->a[275580] = anon_sym_LT_AMP_DASH;
	v->a[275581] = anon_sym_GT_AMP_DASH;
	v->a[275582] = anon_sym_LT_LT_DASH;
	v->a[275583] = anon_sym_LT_LT_LT;
	v->a[275584] = 6;
	v->a[275585] = actions(3);
	v->a[275586] = 1;
	v->a[275587] = sym_comment;
	v->a[275588] = actions(11512);
	v->a[275589] = 1;
	v->a[275590] = aux_sym_concatenation_token1;
	v->a[275591] = actions(11514);
	v->a[275592] = 1;
	v->a[275593] = sym__concat;
	v->a[275594] = state(5207);
	v->a[275595] = 1;
	v->a[275596] = aux_sym_concatenation_repeat1;
	v->a[275597] = actions(5697);
	v->a[275598] = 2;
	v->a[275599] = sym_file_descriptor;
	small_parse_table_13780(v);
}

/* EOF small_parse_table_2755.c */
