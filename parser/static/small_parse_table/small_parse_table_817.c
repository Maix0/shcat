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
	v->a[81700] = sym__comment_word;
	v->a[81701] = sym_word;
	v->a[81702] = state(823);
	v->a[81703] = 5;
	v->a[81704] = sym_arithmetic_expansion;
	v->a[81705] = sym_string;
	v->a[81706] = sym_simple_expansion;
	v->a[81707] = sym_expansion;
	v->a[81708] = sym_command_substitution;
	v->a[81709] = 12;
	v->a[81710] = actions(3);
	v->a[81711] = 1;
	v->a[81712] = sym_comment;
	v->a[81713] = actions(2809);
	v->a[81714] = 1;
	v->a[81715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81716] = actions(2813);
	v->a[81717] = 1;
	v->a[81718] = anon_sym_DQUOTE;
	v->a[81719] = actions(2815);
	small_parse_table_4086(v);
}

void	small_parse_table_4086(t_small_parse_table_array *v)
{
	v->a[81720] = 1;
	v->a[81721] = anon_sym_DOLLAR_LBRACE;
	v->a[81722] = actions(2817);
	v->a[81723] = 1;
	v->a[81724] = anon_sym_DOLLAR_LPAREN;
	v->a[81725] = actions(2819);
	v->a[81726] = 1;
	v->a[81727] = anon_sym_BQUOTE;
	v->a[81728] = actions(2841);
	v->a[81729] = 1;
	v->a[81730] = anon_sym_DOLLAR;
	v->a[81731] = actions(2843);
	v->a[81732] = 1;
	v->a[81733] = sym__comment_word;
	v->a[81734] = actions(2845);
	v->a[81735] = 1;
	v->a[81736] = sym__empty_value;
	v->a[81737] = state(1101);
	v->a[81738] = 1;
	v->a[81739] = sym_concatenation;
	small_parse_table_4087(v);
}

void	small_parse_table_4087(t_small_parse_table_array *v)
{
	v->a[81740] = actions(3084);
	v->a[81741] = 3;
	v->a[81742] = sym_raw_string;
	v->a[81743] = sym_number;
	v->a[81744] = sym_word;
	v->a[81745] = state(1083);
	v->a[81746] = 5;
	v->a[81747] = sym_arithmetic_expansion;
	v->a[81748] = sym_string;
	v->a[81749] = sym_simple_expansion;
	v->a[81750] = sym_expansion;
	v->a[81751] = sym_command_substitution;
	v->a[81752] = 8;
	v->a[81753] = actions(3);
	v->a[81754] = 1;
	v->a[81755] = sym_comment;
	v->a[81756] = actions(871);
	v->a[81757] = 1;
	v->a[81758] = sym_file_descriptor;
	v->a[81759] = actions(3086);
	small_parse_table_4088(v);
}

void	small_parse_table_4088(t_small_parse_table_array *v)
{
	v->a[81760] = 1;
	v->a[81761] = aux_sym_heredoc_redirect_token1;
	v->a[81762] = state(2211);
	v->a[81763] = 1;
	v->a[81764] = sym__heredoc_expression;
	v->a[81765] = actions(851);
	v->a[81766] = 2;
	v->a[81767] = anon_sym_AMP_AMP;
	v->a[81768] = anon_sym_PIPE_PIPE;
	v->a[81769] = actions(855);
	v->a[81770] = 2;
	v->a[81771] = anon_sym_LT_AMP_DASH;
	v->a[81772] = anon_sym_GT_AMP_DASH;
	v->a[81773] = state(1609);
	v->a[81774] = 2;
	v->a[81775] = sym_file_redirect;
	v->a[81776] = aux_sym_redirected_statement_repeat2;
	v->a[81777] = actions(853);
	v->a[81778] = 8;
	v->a[81779] = anon_sym_LT;
	small_parse_table_4089(v);
}

void	small_parse_table_4089(t_small_parse_table_array *v)
{
	v->a[81780] = anon_sym_GT;
	v->a[81781] = anon_sym_GT_GT;
	v->a[81782] = anon_sym_AMP_GT;
	v->a[81783] = anon_sym_AMP_GT_GT;
	v->a[81784] = anon_sym_LT_AMP;
	v->a[81785] = anon_sym_GT_AMP;
	v->a[81786] = anon_sym_GT_PIPE;
	v->a[81787] = 10;
	v->a[81788] = actions(3);
	v->a[81789] = 1;
	v->a[81790] = sym_comment;
	v->a[81791] = actions(1709);
	v->a[81792] = 1;
	v->a[81793] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81794] = actions(1711);
	v->a[81795] = 1;
	v->a[81796] = anon_sym_DOLLAR;
	v->a[81797] = actions(1713);
	v->a[81798] = 1;
	v->a[81799] = anon_sym_DQUOTE;
	small_parse_table_4090(v);
}

/* EOF small_parse_table_817.c */
