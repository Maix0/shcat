/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_817.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4085(t_small_parse_table_array *v)
{
	v->a[81700] = sym_raw_string;
	v->a[81701] = sym_ansi_c_string;
	v->a[81702] = aux_sym_number_token1;
	v->a[81703] = aux_sym_number_token2;
	v->a[81704] = anon_sym_DOLLAR_LBRACE;
	v->a[81705] = anon_sym_DOLLAR_LPAREN;
	v->a[81706] = anon_sym_BQUOTE;
	v->a[81707] = anon_sym_DOLLAR_BQUOTE;
	v->a[81708] = anon_sym_LT_LPAREN;
	v->a[81709] = anon_sym_GT_LPAREN;
	v->a[81710] = aux_sym__simple_variable_name_token1;
	v->a[81711] = sym_word;
	v->a[81712] = 7;
	v->a[81713] = actions(3);
	v->a[81714] = 1;
	v->a[81715] = sym_comment;
	v->a[81716] = actions(4699);
	v->a[81717] = 1;
	v->a[81718] = aux_sym_concatenation_token1;
	v->a[81719] = actions(4701);
	small_parse_table_4086(v);
}

void	small_parse_table_4086(t_small_parse_table_array *v)
{
	v->a[81720] = 1;
	v->a[81721] = sym__concat;
	v->a[81722] = actions(5952);
	v->a[81723] = 1;
	v->a[81724] = anon_sym_LPAREN;
	v->a[81725] = state(1721);
	v->a[81726] = 1;
	v->a[81727] = aux_sym_concatenation_repeat1;
	v->a[81728] = actions(1281);
	v->a[81729] = 5;
	v->a[81730] = sym_file_descriptor;
	v->a[81731] = sym_test_operator;
	v->a[81732] = sym__bare_dollar;
	v->a[81733] = sym__brace_start;
	v->a[81734] = aux_sym_heredoc_redirect_token1;
	v->a[81735] = actions(1271);
	v->a[81736] = 36;
	v->a[81737] = anon_sym_LPAREN_LPAREN;
	v->a[81738] = anon_sym_PIPE_PIPE;
	v->a[81739] = anon_sym_AMP_AMP;
	small_parse_table_4087(v);
}

void	small_parse_table_4087(t_small_parse_table_array *v)
{
	v->a[81740] = anon_sym_PIPE;
	v->a[81741] = anon_sym_EQ_EQ;
	v->a[81742] = anon_sym_LT;
	v->a[81743] = anon_sym_GT;
	v->a[81744] = anon_sym_LT_LT;
	v->a[81745] = anon_sym_GT_GT;
	v->a[81746] = anon_sym_PIPE_AMP;
	v->a[81747] = anon_sym_EQ_TILDE;
	v->a[81748] = anon_sym_AMP_GT;
	v->a[81749] = anon_sym_AMP_GT_GT;
	v->a[81750] = anon_sym_LT_AMP;
	v->a[81751] = anon_sym_GT_AMP;
	v->a[81752] = anon_sym_GT_PIPE;
	v->a[81753] = anon_sym_LT_AMP_DASH;
	v->a[81754] = anon_sym_GT_AMP_DASH;
	v->a[81755] = anon_sym_LT_LT_DASH;
	v->a[81756] = anon_sym_LT_LT_LT;
	v->a[81757] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81758] = anon_sym_DOLLAR_LBRACK;
	v->a[81759] = anon_sym_DOLLAR;
	small_parse_table_4088(v);
}

void	small_parse_table_4088(t_small_parse_table_array *v)
{
	v->a[81760] = sym__special_character;
	v->a[81761] = anon_sym_DQUOTE;
	v->a[81762] = sym_raw_string;
	v->a[81763] = sym_ansi_c_string;
	v->a[81764] = aux_sym_number_token1;
	v->a[81765] = aux_sym_number_token2;
	v->a[81766] = anon_sym_DOLLAR_LBRACE;
	v->a[81767] = anon_sym_DOLLAR_LPAREN;
	v->a[81768] = anon_sym_BQUOTE;
	v->a[81769] = anon_sym_DOLLAR_BQUOTE;
	v->a[81770] = anon_sym_LT_LPAREN;
	v->a[81771] = anon_sym_GT_LPAREN;
	v->a[81772] = sym_word;
	v->a[81773] = 5;
	v->a[81774] = actions(3);
	v->a[81775] = 1;
	v->a[81776] = sym_comment;
	v->a[81777] = actions(5928);
	v->a[81778] = 1;
	v->a[81779] = sym__special_character;
	small_parse_table_4089(v);
}

void	small_parse_table_4089(t_small_parse_table_array *v)
{
	v->a[81780] = state(1646);
	v->a[81781] = 1;
	v->a[81782] = aux_sym__literal_repeat1;
	v->a[81783] = actions(5069);
	v->a[81784] = 5;
	v->a[81785] = sym_file_descriptor;
	v->a[81786] = sym_variable_name;
	v->a[81787] = sym_test_operator;
	v->a[81788] = sym__brace_start;
	v->a[81789] = aux_sym_heredoc_redirect_token1;
	v->a[81790] = actions(5067);
	v->a[81791] = 38;
	v->a[81792] = anon_sym_LPAREN_LPAREN;
	v->a[81793] = anon_sym_SEMI;
	v->a[81794] = anon_sym_PIPE_PIPE;
	v->a[81795] = anon_sym_AMP_AMP;
	v->a[81796] = anon_sym_PIPE;
	v->a[81797] = anon_sym_AMP;
	v->a[81798] = anon_sym_LT;
	v->a[81799] = anon_sym_GT;
	small_parse_table_4090(v);
}

/* EOF small_parse_table_817.c */
