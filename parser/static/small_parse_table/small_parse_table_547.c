/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_547.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2735(t_small_parse_table_array *v)
{
	v->a[54700] = anon_sym_BQUOTE;
	v->a[54701] = sym_word;
	v->a[54702] = 11;
	v->a[54703] = actions(3);
	v->a[54704] = 1;
	v->a[54705] = sym_comment;
	v->a[54706] = actions(782);
	v->a[54707] = 1;
	v->a[54708] = anon_sym_PIPE;
	v->a[54709] = actions(784);
	v->a[54710] = 1;
	v->a[54711] = anon_sym_BQUOTE;
	v->a[54712] = actions(1888);
	v->a[54713] = 1;
	v->a[54714] = aux_sym_heredoc_redirect_token1;
	v->a[54715] = actions(1890);
	v->a[54716] = 1;
	v->a[54717] = sym_file_descriptor;
	v->a[54718] = state(814);
	v->a[54719] = 1;
	small_parse_table_2736(v);
}

void	small_parse_table_2736(t_small_parse_table_array *v)
{
	v->a[54720] = sym_terminator;
	v->a[54721] = actions(786);
	v->a[54722] = 2;
	v->a[54723] = anon_sym_SEMI_SEMI;
	v->a[54724] = anon_sym_SEMI;
	v->a[54725] = actions(790);
	v->a[54726] = 2;
	v->a[54727] = anon_sym_LT_LT;
	v->a[54728] = anon_sym_LT_LT_DASH;
	v->a[54729] = actions(1059);
	v->a[54730] = 2;
	v->a[54731] = anon_sym_AMP_AMP;
	v->a[54732] = anon_sym_PIPE_PIPE;
	v->a[54733] = state(1062);
	v->a[54734] = 3;
	v->a[54735] = sym_file_redirect;
	v->a[54736] = sym_heredoc_redirect;
	v->a[54737] = aux_sym_redirected_statement_repeat1;
	v->a[54738] = actions(1886);
	v->a[54739] = 7;
	small_parse_table_2737(v);
}

void	small_parse_table_2737(t_small_parse_table_array *v)
{
	v->a[54740] = anon_sym_LT;
	v->a[54741] = anon_sym_GT;
	v->a[54742] = anon_sym_GT_GT;
	v->a[54743] = anon_sym_LT_AMP;
	v->a[54744] = anon_sym_GT_AMP;
	v->a[54745] = anon_sym_GT_PIPE;
	v->a[54746] = anon_sym_LT_GT;
	v->a[54747] = 11;
	v->a[54748] = actions(3);
	v->a[54749] = 1;
	v->a[54750] = sym_comment;
	v->a[54751] = actions(782);
	v->a[54752] = 1;
	v->a[54753] = anon_sym_PIPE;
	v->a[54754] = actions(797);
	v->a[54755] = 1;
	v->a[54756] = anon_sym_BQUOTE;
	v->a[54757] = actions(1888);
	v->a[54758] = 1;
	v->a[54759] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2738(v);
}

void	small_parse_table_2738(t_small_parse_table_array *v)
{
	v->a[54760] = actions(1890);
	v->a[54761] = 1;
	v->a[54762] = sym_file_descriptor;
	v->a[54763] = state(793);
	v->a[54764] = 1;
	v->a[54765] = sym_terminator;
	v->a[54766] = actions(786);
	v->a[54767] = 2;
	v->a[54768] = anon_sym_SEMI_SEMI;
	v->a[54769] = anon_sym_SEMI;
	v->a[54770] = actions(790);
	v->a[54771] = 2;
	v->a[54772] = anon_sym_LT_LT;
	v->a[54773] = anon_sym_LT_LT_DASH;
	v->a[54774] = actions(1059);
	v->a[54775] = 2;
	v->a[54776] = anon_sym_AMP_AMP;
	v->a[54777] = anon_sym_PIPE_PIPE;
	v->a[54778] = state(1062);
	v->a[54779] = 3;
	small_parse_table_2739(v);
}

void	small_parse_table_2739(t_small_parse_table_array *v)
{
	v->a[54780] = sym_file_redirect;
	v->a[54781] = sym_heredoc_redirect;
	v->a[54782] = aux_sym_redirected_statement_repeat1;
	v->a[54783] = actions(1886);
	v->a[54784] = 7;
	v->a[54785] = anon_sym_LT;
	v->a[54786] = anon_sym_GT;
	v->a[54787] = anon_sym_GT_GT;
	v->a[54788] = anon_sym_LT_AMP;
	v->a[54789] = anon_sym_GT_AMP;
	v->a[54790] = anon_sym_GT_PIPE;
	v->a[54791] = anon_sym_LT_GT;
	v->a[54792] = 6;
	v->a[54793] = actions(3);
	v->a[54794] = 1;
	v->a[54795] = sym_comment;
	v->a[54796] = actions(1892);
	v->a[54797] = 1;
	v->a[54798] = aux_sym_concatenation_token1;
	v->a[54799] = actions(1900);
	small_parse_table_2740(v);
}

/* EOF small_parse_table_547.c */
