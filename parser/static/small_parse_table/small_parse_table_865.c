/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_865.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4325(t_small_parse_table_array *v)
{
	v->a[86500] = sym_test_operator;
	v->a[86501] = sym__brace_start;
	v->a[86502] = aux_sym_heredoc_redirect_token1;
	v->a[86503] = actions(5393);
	v->a[86504] = 38;
	v->a[86505] = anon_sym_LPAREN_LPAREN;
	v->a[86506] = anon_sym_SEMI;
	v->a[86507] = anon_sym_PIPE_PIPE;
	v->a[86508] = anon_sym_AMP_AMP;
	v->a[86509] = anon_sym_PIPE;
	v->a[86510] = anon_sym_AMP;
	v->a[86511] = anon_sym_LT;
	v->a[86512] = anon_sym_GT;
	v->a[86513] = anon_sym_LT_LT;
	v->a[86514] = anon_sym_GT_GT;
	v->a[86515] = anon_sym_esac;
	v->a[86516] = anon_sym_SEMI_SEMI;
	v->a[86517] = anon_sym_SEMI_AMP;
	v->a[86518] = anon_sym_SEMI_SEMI_AMP;
	v->a[86519] = anon_sym_PIPE_AMP;
	small_parse_table_4326(v);
}

void	small_parse_table_4326(t_small_parse_table_array *v)
{
	v->a[86520] = anon_sym_AMP_GT;
	v->a[86521] = anon_sym_AMP_GT_GT;
	v->a[86522] = anon_sym_LT_AMP;
	v->a[86523] = anon_sym_GT_AMP;
	v->a[86524] = anon_sym_GT_PIPE;
	v->a[86525] = anon_sym_LT_AMP_DASH;
	v->a[86526] = anon_sym_GT_AMP_DASH;
	v->a[86527] = anon_sym_LT_LT_DASH;
	v->a[86528] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86529] = anon_sym_DOLLAR_LBRACK;
	v->a[86530] = anon_sym_DOLLAR;
	v->a[86531] = anon_sym_DQUOTE;
	v->a[86532] = sym_raw_string;
	v->a[86533] = sym_ansi_c_string;
	v->a[86534] = aux_sym_number_token1;
	v->a[86535] = aux_sym_number_token2;
	v->a[86536] = anon_sym_DOLLAR_LBRACE;
	v->a[86537] = anon_sym_DOLLAR_LPAREN;
	v->a[86538] = anon_sym_BQUOTE;
	v->a[86539] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4327(v);
}

void	small_parse_table_4327(t_small_parse_table_array *v)
{
	v->a[86540] = anon_sym_LT_LPAREN;
	v->a[86541] = anon_sym_GT_LPAREN;
	v->a[86542] = sym_word;
	v->a[86543] = 3;
	v->a[86544] = actions(3);
	v->a[86545] = 1;
	v->a[86546] = sym_comment;
	v->a[86547] = actions(1358);
	v->a[86548] = 5;
	v->a[86549] = sym_file_descriptor;
	v->a[86550] = sym__concat;
	v->a[86551] = sym_test_operator;
	v->a[86552] = sym__brace_start;
	v->a[86553] = aux_sym_heredoc_redirect_token1;
	v->a[86554] = actions(1356);
	v->a[86555] = 39;
	v->a[86556] = anon_sym_LPAREN_LPAREN;
	v->a[86557] = anon_sym_SEMI;
	v->a[86558] = anon_sym_PIPE_PIPE;
	v->a[86559] = anon_sym_AMP_AMP;
	small_parse_table_4328(v);
}

void	small_parse_table_4328(t_small_parse_table_array *v)
{
	v->a[86560] = anon_sym_PIPE;
	v->a[86561] = anon_sym_AMP;
	v->a[86562] = anon_sym_LT;
	v->a[86563] = anon_sym_GT;
	v->a[86564] = anon_sym_LT_LT;
	v->a[86565] = anon_sym_GT_GT;
	v->a[86566] = anon_sym_RPAREN;
	v->a[86567] = anon_sym_SEMI_SEMI;
	v->a[86568] = anon_sym_PIPE_AMP;
	v->a[86569] = anon_sym_AMP_GT;
	v->a[86570] = anon_sym_AMP_GT_GT;
	v->a[86571] = anon_sym_LT_AMP;
	v->a[86572] = anon_sym_GT_AMP;
	v->a[86573] = anon_sym_GT_PIPE;
	v->a[86574] = anon_sym_LT_AMP_DASH;
	v->a[86575] = anon_sym_GT_AMP_DASH;
	v->a[86576] = anon_sym_LT_LT_DASH;
	v->a[86577] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86578] = anon_sym_DOLLAR_LBRACK;
	v->a[86579] = aux_sym_concatenation_token1;
	small_parse_table_4329(v);
}

void	small_parse_table_4329(t_small_parse_table_array *v)
{
	v->a[86580] = anon_sym_DOLLAR;
	v->a[86581] = sym__special_character;
	v->a[86582] = anon_sym_DQUOTE;
	v->a[86583] = sym_raw_string;
	v->a[86584] = sym_ansi_c_string;
	v->a[86585] = aux_sym_number_token1;
	v->a[86586] = aux_sym_number_token2;
	v->a[86587] = anon_sym_DOLLAR_LBRACE;
	v->a[86588] = anon_sym_DOLLAR_LPAREN;
	v->a[86589] = anon_sym_BQUOTE;
	v->a[86590] = anon_sym_DOLLAR_BQUOTE;
	v->a[86591] = anon_sym_LT_LPAREN;
	v->a[86592] = anon_sym_GT_LPAREN;
	v->a[86593] = aux_sym__simple_variable_name_token1;
	v->a[86594] = sym_word;
	v->a[86595] = 3;
	v->a[86596] = actions(3);
	v->a[86597] = 1;
	v->a[86598] = sym_comment;
	v->a[86599] = actions(1346);
	small_parse_table_4330(v);
}

/* EOF small_parse_table_865.c */
