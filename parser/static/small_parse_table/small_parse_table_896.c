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
	v->a[89600] = sym_number;
	v->a[89601] = sym_word;
	v->a[89602] = state(595);
	v->a[89603] = 5;
	v->a[89604] = sym_arithmetic_expansion;
	v->a[89605] = sym_string;
	v->a[89606] = sym_simple_expansion;
	v->a[89607] = sym_expansion;
	v->a[89608] = sym_command_substitution;
	v->a[89609] = 10;
	v->a[89610] = actions(3);
	v->a[89611] = 1;
	v->a[89612] = sym_comment;
	v->a[89613] = actions(3172);
	v->a[89614] = 1;
	v->a[89615] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89616] = actions(3174);
	v->a[89617] = 1;
	v->a[89618] = anon_sym_DOLLAR;
	v->a[89619] = actions(3176);
	small_parse_table_4481(v);
}

void	small_parse_table_4481(t_small_parse_table_array *v)
{
	v->a[89620] = 1;
	v->a[89621] = anon_sym_DQUOTE;
	v->a[89622] = actions(3178);
	v->a[89623] = 1;
	v->a[89624] = anon_sym_DOLLAR_LBRACE;
	v->a[89625] = actions(3180);
	v->a[89626] = 1;
	v->a[89627] = anon_sym_DOLLAR_LPAREN;
	v->a[89628] = actions(3182);
	v->a[89629] = 1;
	v->a[89630] = anon_sym_BQUOTE;
	v->a[89631] = state(206);
	v->a[89632] = 2;
	v->a[89633] = sym_concatenation;
	v->a[89634] = aux_sym_for_statement_repeat1;
	v->a[89635] = actions(3604);
	v->a[89636] = 3;
	v->a[89637] = sym_raw_string;
	v->a[89638] = sym_number;
	v->a[89639] = sym_word;
	small_parse_table_4482(v);
}

void	small_parse_table_4482(t_small_parse_table_array *v)
{
	v->a[89640] = state(400);
	v->a[89641] = 5;
	v->a[89642] = sym_arithmetic_expansion;
	v->a[89643] = sym_string;
	v->a[89644] = sym_simple_expansion;
	v->a[89645] = sym_expansion;
	v->a[89646] = sym_command_substitution;
	v->a[89647] = 10;
	v->a[89648] = actions(3);
	v->a[89649] = 1;
	v->a[89650] = sym_comment;
	v->a[89651] = actions(729);
	v->a[89652] = 1;
	v->a[89653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89654] = actions(731);
	v->a[89655] = 1;
	v->a[89656] = anon_sym_DOLLAR;
	v->a[89657] = actions(733);
	v->a[89658] = 1;
	v->a[89659] = anon_sym_DQUOTE;
	small_parse_table_4483(v);
}

void	small_parse_table_4483(t_small_parse_table_array *v)
{
	v->a[89660] = actions(735);
	v->a[89661] = 1;
	v->a[89662] = anon_sym_DOLLAR_LBRACE;
	v->a[89663] = actions(737);
	v->a[89664] = 1;
	v->a[89665] = anon_sym_DOLLAR_LPAREN;
	v->a[89666] = actions(739);
	v->a[89667] = 1;
	v->a[89668] = anon_sym_BQUOTE;
	v->a[89669] = state(232);
	v->a[89670] = 2;
	v->a[89671] = sym_concatenation;
	v->a[89672] = aux_sym_for_statement_repeat1;
	v->a[89673] = actions(727);
	v->a[89674] = 3;
	v->a[89675] = sym_raw_string;
	v->a[89676] = sym_number;
	v->a[89677] = sym_word;
	v->a[89678] = state(561);
	v->a[89679] = 5;
	small_parse_table_4484(v);
}

void	small_parse_table_4484(t_small_parse_table_array *v)
{
	v->a[89680] = sym_arithmetic_expansion;
	v->a[89681] = sym_string;
	v->a[89682] = sym_simple_expansion;
	v->a[89683] = sym_expansion;
	v->a[89684] = sym_command_substitution;
	v->a[89685] = 3;
	v->a[89686] = actions(3);
	v->a[89687] = 1;
	v->a[89688] = sym_comment;
	v->a[89689] = actions(1100);
	v->a[89690] = 3;
	v->a[89691] = sym_file_descriptor;
	v->a[89692] = sym__concat;
	v->a[89693] = aux_sym_heredoc_redirect_token1;
	v->a[89694] = actions(1102);
	v->a[89695] = 13;
	v->a[89696] = anon_sym_AMP_AMP;
	v->a[89697] = anon_sym_PIPE_PIPE;
	v->a[89698] = anon_sym_LT;
	v->a[89699] = anon_sym_GT;
	small_parse_table_4485(v);
}

/* EOF small_parse_table_896.c */
