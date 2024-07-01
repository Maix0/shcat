/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_896.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4480(t_small_parse_table_array *v)
{
	v->a[89600] = state(2197);
	v->a[89601] = 1;
	v->a[89602] = sym_terminator;
	v->a[89603] = actions(2262);
	v->a[89604] = 3;
	v->a[89605] = anon_sym_SEMI_SEMI;
	v->a[89606] = anon_sym_AMP;
	v->a[89607] = anon_sym_SEMI;
	v->a[89608] = 7;
	v->a[89609] = actions(870);
	v->a[89610] = 1;
	v->a[89611] = sym_comment;
	v->a[89612] = actions(3867);
	v->a[89613] = 1;
	v->a[89614] = anon_sym_DQUOTE;
	v->a[89615] = actions(3869);
	v->a[89616] = 1;
	v->a[89617] = anon_sym_DOLLAR_LBRACE;
	v->a[89618] = actions(3871);
	v->a[89619] = 1;
	small_parse_table_4481(v);
}

void	small_parse_table_4481(t_small_parse_table_array *v)
{
	v->a[89620] = anon_sym_DOLLAR_LPAREN;
	v->a[89621] = actions(3873);
	v->a[89622] = 1;
	v->a[89623] = anon_sym_BQUOTE;
	v->a[89624] = actions(3865);
	v->a[89625] = 2;
	v->a[89626] = anon_sym_PIPE;
	v->a[89627] = anon_sym_RPAREN;
	v->a[89628] = state(2085);
	v->a[89629] = 3;
	v->a[89630] = sym_string;
	v->a[89631] = sym_expansion;
	v->a[89632] = sym_command_substitution;
	v->a[89633] = 8;
	v->a[89634] = actions(3);
	v->a[89635] = 1;
	v->a[89636] = sym_comment;
	v->a[89637] = actions(3859);
	v->a[89638] = 1;
	v->a[89639] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4482(v);
}

void	small_parse_table_4482(t_small_parse_table_array *v)
{
	v->a[89640] = actions(3861);
	v->a[89641] = 1;
	v->a[89642] = aux_sym_concatenation_token1;
	v->a[89643] = actions(3863);
	v->a[89644] = 1;
	v->a[89645] = sym__concat;
	v->a[89646] = actions(3875);
	v->a[89647] = 1;
	v->a[89648] = anon_sym_in;
	v->a[89649] = state(1967);
	v->a[89650] = 1;
	v->a[89651] = aux_sym_concatenation_repeat1;
	v->a[89652] = state(2315);
	v->a[89653] = 1;
	v->a[89654] = sym_terminator;
	v->a[89655] = actions(2262);
	v->a[89656] = 3;
	v->a[89657] = anon_sym_SEMI_SEMI;
	v->a[89658] = anon_sym_AMP;
	v->a[89659] = anon_sym_SEMI;
	small_parse_table_4483(v);
}

void	small_parse_table_4483(t_small_parse_table_array *v)
{
	v->a[89660] = 8;
	v->a[89661] = actions(3);
	v->a[89662] = 1;
	v->a[89663] = sym_comment;
	v->a[89664] = actions(3859);
	v->a[89665] = 1;
	v->a[89666] = aux_sym_heredoc_redirect_token1;
	v->a[89667] = actions(3861);
	v->a[89668] = 1;
	v->a[89669] = aux_sym_concatenation_token1;
	v->a[89670] = actions(3863);
	v->a[89671] = 1;
	v->a[89672] = sym__concat;
	v->a[89673] = actions(3877);
	v->a[89674] = 1;
	v->a[89675] = anon_sym_in;
	v->a[89676] = state(1967);
	v->a[89677] = 1;
	v->a[89678] = aux_sym_concatenation_repeat1;
	v->a[89679] = state(2170);
	small_parse_table_4484(v);
}

void	small_parse_table_4484(t_small_parse_table_array *v)
{
	v->a[89680] = 1;
	v->a[89681] = sym_terminator;
	v->a[89682] = actions(2262);
	v->a[89683] = 3;
	v->a[89684] = anon_sym_SEMI_SEMI;
	v->a[89685] = anon_sym_AMP;
	v->a[89686] = anon_sym_SEMI;
	v->a[89687] = 4;
	v->a[89688] = actions(870);
	v->a[89689] = 1;
	v->a[89690] = sym_comment;
	v->a[89691] = actions(3789);
	v->a[89692] = 2;
	v->a[89693] = anon_sym_GT_GT;
	v->a[89694] = anon_sym_GT_PIPE;
	v->a[89695] = actions(3791);
	v->a[89696] = 2;
	v->a[89697] = anon_sym_LT_AMP_DASH;
	v->a[89698] = anon_sym_GT_AMP_DASH;
	v->a[89699] = actions(3787);
	small_parse_table_4485(v);
}

/* EOF small_parse_table_896.c */
