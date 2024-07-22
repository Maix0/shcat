/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_697.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3485(t_small_parse_table_array *v)
{
	v->a[69700] = sym_concatenation;
	v->a[69701] = aux_sym_for_statement_repeat1;
	v->a[69702] = actions(2775);
	v->a[69703] = 3;
	v->a[69704] = sym_raw_string;
	v->a[69705] = sym_number;
	v->a[69706] = sym_word;
	v->a[69707] = state(396);
	v->a[69708] = 5;
	v->a[69709] = sym_arithmetic_expansion;
	v->a[69710] = sym_string;
	v->a[69711] = sym_simple_expansion;
	v->a[69712] = sym_expansion;
	v->a[69713] = sym_command_substitution;
	v->a[69714] = 10;
	v->a[69715] = actions(3);
	v->a[69716] = 1;
	v->a[69717] = sym_comment;
	v->a[69718] = actions(2331);
	v->a[69719] = 1;
	small_parse_table_3486(v);
}

void	small_parse_table_3486(t_small_parse_table_array *v)
{
	v->a[69720] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69721] = actions(2335);
	v->a[69722] = 1;
	v->a[69723] = anon_sym_DQUOTE;
	v->a[69724] = actions(2337);
	v->a[69725] = 1;
	v->a[69726] = anon_sym_DOLLAR_LBRACE;
	v->a[69727] = actions(2339);
	v->a[69728] = 1;
	v->a[69729] = anon_sym_DOLLAR_LPAREN;
	v->a[69730] = actions(2341);
	v->a[69731] = 1;
	v->a[69732] = anon_sym_BQUOTE;
	v->a[69733] = actions(2567);
	v->a[69734] = 1;
	v->a[69735] = anon_sym_DOLLAR;
	v->a[69736] = state(231);
	v->a[69737] = 2;
	v->a[69738] = sym_concatenation;
	v->a[69739] = aux_sym_for_statement_repeat1;
	small_parse_table_3487(v);
}

void	small_parse_table_3487(t_small_parse_table_array *v)
{
	v->a[69740] = actions(2775);
	v->a[69741] = 3;
	v->a[69742] = sym_raw_string;
	v->a[69743] = sym_number;
	v->a[69744] = sym_word;
	v->a[69745] = state(396);
	v->a[69746] = 5;
	v->a[69747] = sym_arithmetic_expansion;
	v->a[69748] = sym_string;
	v->a[69749] = sym_simple_expansion;
	v->a[69750] = sym_expansion;
	v->a[69751] = sym_command_substitution;
	v->a[69752] = 7;
	v->a[69753] = actions(3);
	v->a[69754] = 1;
	v->a[69755] = sym_comment;
	v->a[69756] = actions(2429);
	v->a[69757] = 1;
	v->a[69758] = sym_file_descriptor;
	v->a[69759] = actions(2444);
	small_parse_table_3488(v);
}

void	small_parse_table_3488(t_small_parse_table_array *v)
{
	v->a[69760] = 1;
	v->a[69761] = aux_sym_heredoc_redirect_token1;
	v->a[69762] = actions(790);
	v->a[69763] = 2;
	v->a[69764] = anon_sym_LT_LT;
	v->a[69765] = anon_sym_LT_LT_DASH;
	v->a[69766] = actions(1328);
	v->a[69767] = 2;
	v->a[69768] = anon_sym_AMP_AMP;
	v->a[69769] = anon_sym_PIPE_PIPE;
	v->a[69770] = state(1353);
	v->a[69771] = 3;
	v->a[69772] = sym_file_redirect;
	v->a[69773] = sym_heredoc_redirect;
	v->a[69774] = aux_sym_redirected_statement_repeat1;
	v->a[69775] = actions(2425);
	v->a[69776] = 7;
	v->a[69777] = anon_sym_LT;
	v->a[69778] = anon_sym_GT;
	v->a[69779] = anon_sym_GT_GT;
	small_parse_table_3489(v);
}

void	small_parse_table_3489(t_small_parse_table_array *v)
{
	v->a[69780] = anon_sym_LT_AMP;
	v->a[69781] = anon_sym_GT_AMP;
	v->a[69782] = anon_sym_GT_PIPE;
	v->a[69783] = anon_sym_LT_GT;
	v->a[69784] = 6;
	v->a[69785] = actions(3);
	v->a[69786] = 1;
	v->a[69787] = sym_comment;
	v->a[69788] = actions(2157);
	v->a[69789] = 1;
	v->a[69790] = aux_sym_heredoc_redirect_token1;
	v->a[69791] = actions(2780);
	v->a[69792] = 1;
	v->a[69793] = sym_file_descriptor;
	v->a[69794] = state(1397);
	v->a[69795] = 2;
	v->a[69796] = sym_file_redirect;
	v->a[69797] = aux_sym_redirected_statement_repeat2;
	v->a[69798] = actions(2159);
	v->a[69799] = 5;
	small_parse_table_3490(v);
}

/* EOF small_parse_table_697.c */
