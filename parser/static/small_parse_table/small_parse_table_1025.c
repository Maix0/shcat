/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1025.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5125(t_small_parse_table_array *v)
{
	v->a[102500] = anon_sym_esac;
	v->a[102501] = anon_sym_SEMI_SEMI;
	v->a[102502] = anon_sym_SEMI_AMP;
	v->a[102503] = anon_sym_SEMI_SEMI_AMP;
	v->a[102504] = actions(5153);
	v->a[102505] = 8;
	v->a[102506] = anon_sym_LT;
	v->a[102507] = anon_sym_GT;
	v->a[102508] = anon_sym_GT_GT;
	v->a[102509] = anon_sym_AMP_GT;
	v->a[102510] = anon_sym_AMP_GT_GT;
	v->a[102511] = anon_sym_LT_AMP;
	v->a[102512] = anon_sym_GT_AMP;
	v->a[102513] = anon_sym_GT_PIPE;
	v->a[102514] = 19;
	v->a[102515] = actions(3);
	v->a[102516] = 1;
	v->a[102517] = sym_comment;
	v->a[102518] = actions(2458);
	v->a[102519] = 1;
	small_parse_table_5126(v);
}

void	small_parse_table_5126(t_small_parse_table_array *v)
{
	v->a[102520] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102521] = actions(2460);
	v->a[102522] = 1;
	v->a[102523] = anon_sym_DOLLAR;
	v->a[102524] = actions(2462);
	v->a[102525] = 1;
	v->a[102526] = sym__special_character;
	v->a[102527] = actions(2464);
	v->a[102528] = 1;
	v->a[102529] = anon_sym_DQUOTE;
	v->a[102530] = actions(2466);
	v->a[102531] = 1;
	v->a[102532] = aux_sym_number_token1;
	v->a[102533] = actions(2468);
	v->a[102534] = 1;
	v->a[102535] = aux_sym_number_token2;
	v->a[102536] = actions(2470);
	v->a[102537] = 1;
	v->a[102538] = anon_sym_DOLLAR_LBRACE;
	v->a[102539] = actions(2472);
	small_parse_table_5127(v);
}

void	small_parse_table_5127(t_small_parse_table_array *v)
{
	v->a[102540] = 1;
	v->a[102541] = anon_sym_DOLLAR_LPAREN;
	v->a[102542] = actions(2474);
	v->a[102543] = 1;
	v->a[102544] = anon_sym_BQUOTE;
	v->a[102545] = actions(2476);
	v->a[102546] = 1;
	v->a[102547] = anon_sym_DOLLAR_BQUOTE;
	v->a[102548] = actions(2480);
	v->a[102549] = 1;
	v->a[102550] = sym_test_operator;
	v->a[102551] = actions(2482);
	v->a[102552] = 1;
	v->a[102553] = sym__brace_start;
	v->a[102554] = actions(5925);
	v->a[102555] = 1;
	v->a[102556] = aux_sym_heredoc_redirect_token1;
	v->a[102557] = state(2122);
	v->a[102558] = 1;
	v->a[102559] = aux_sym__heredoc_command;
	small_parse_table_5128(v);
}

void	small_parse_table_5128(t_small_parse_table_array *v)
{
	v->a[102560] = state(2852);
	v->a[102561] = 1;
	v->a[102562] = aux_sym__literal_repeat1;
	v->a[102563] = state(2882);
	v->a[102564] = 1;
	v->a[102565] = sym_concatenation;
	v->a[102566] = actions(2446);
	v->a[102567] = 2;
	v->a[102568] = sym_raw_string;
	v->a[102569] = sym_word;
	v->a[102570] = state(2716);
	v->a[102571] = 7;
	v->a[102572] = sym_arithmetic_expansion;
	v->a[102573] = sym_brace_expression;
	v->a[102574] = sym_string;
	v->a[102575] = sym_number;
	v->a[102576] = sym_simple_expansion;
	v->a[102577] = sym_expansion;
	v->a[102578] = sym_command_substitution;
	v->a[102579] = 6;
	small_parse_table_5129(v);
}

void	small_parse_table_5129(t_small_parse_table_array *v)
{
	v->a[102580] = actions(3);
	v->a[102581] = 1;
	v->a[102582] = sym_comment;
	v->a[102583] = actions(5267);
	v->a[102584] = 1;
	v->a[102585] = aux_sym_concatenation_token1;
	v->a[102586] = actions(5269);
	v->a[102587] = 1;
	v->a[102588] = sym__concat;
	v->a[102589] = state(2138);
	v->a[102590] = 1;
	v->a[102591] = aux_sym_concatenation_repeat1;
	v->a[102592] = actions(1182);
	v->a[102593] = 3;
	v->a[102594] = sym_file_descriptor;
	v->a[102595] = ts_builtin_sym_end;
	v->a[102596] = aux_sym_heredoc_redirect_token1;
	v->a[102597] = actions(1180);
	v->a[102598] = 19;
	v->a[102599] = anon_sym_PIPE;
	small_parse_table_5130(v);
}

/* EOF small_parse_table_1025.c */
