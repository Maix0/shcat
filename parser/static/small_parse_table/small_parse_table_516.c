/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_516.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2580(t_small_parse_table_array *v)
{
	v->a[51600] = sym_comment;
	v->a[51601] = actions(536);
	v->a[51602] = 1;
	v->a[51603] = sym_file_descriptor;
	v->a[51604] = actions(1726);
	v->a[51605] = 1;
	v->a[51606] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51607] = actions(1729);
	v->a[51608] = 1;
	v->a[51609] = anon_sym_DOLLAR;
	v->a[51610] = actions(1732);
	v->a[51611] = 1;
	v->a[51612] = anon_sym_DQUOTE;
	v->a[51613] = actions(1735);
	v->a[51614] = 1;
	v->a[51615] = anon_sym_DOLLAR_LBRACE;
	v->a[51616] = actions(1738);
	v->a[51617] = 1;
	v->a[51618] = anon_sym_DOLLAR_LPAREN;
	v->a[51619] = actions(1741);
	small_parse_table_2581(v);
}

void	small_parse_table_2581(t_small_parse_table_array *v)
{
	v->a[51620] = 1;
	v->a[51621] = anon_sym_BQUOTE;
	v->a[51622] = state(804);
	v->a[51623] = 2;
	v->a[51624] = sym_concatenation;
	v->a[51625] = aux_sym_for_statement_repeat1;
	v->a[51626] = actions(1723);
	v->a[51627] = 3;
	v->a[51628] = sym_raw_string;
	v->a[51629] = sym_number;
	v->a[51630] = sym_word;
	v->a[51631] = state(950);
	v->a[51632] = 5;
	v->a[51633] = sym_arithmetic_expansion;
	v->a[51634] = sym_string;
	v->a[51635] = sym_simple_expansion;
	v->a[51636] = sym_expansion;
	v->a[51637] = sym_command_substitution;
	v->a[51638] = actions(516);
	v->a[51639] = 13;
	small_parse_table_2582(v);
}

void	small_parse_table_2582(t_small_parse_table_array *v)
{
	v->a[51640] = anon_sym_AMP_AMP;
	v->a[51641] = anon_sym_PIPE_PIPE;
	v->a[51642] = anon_sym_LT;
	v->a[51643] = anon_sym_GT;
	v->a[51644] = anon_sym_GT_GT;
	v->a[51645] = anon_sym_AMP_GT;
	v->a[51646] = anon_sym_AMP_GT_GT;
	v->a[51647] = anon_sym_LT_AMP;
	v->a[51648] = anon_sym_GT_AMP;
	v->a[51649] = anon_sym_GT_PIPE;
	v->a[51650] = anon_sym_LT_AMP_DASH;
	v->a[51651] = anon_sym_GT_AMP_DASH;
	v->a[51652] = aux_sym_heredoc_redirect_token1;
	v->a[51653] = 3;
	v->a[51654] = actions(3);
	v->a[51655] = 1;
	v->a[51656] = sym_comment;
	v->a[51657] = actions(1276);
	v->a[51658] = 2;
	v->a[51659] = sym_file_descriptor;
	small_parse_table_2583(v);
}

void	small_parse_table_2583(t_small_parse_table_array *v)
{
	v->a[51660] = sym_variable_name;
	v->a[51661] = actions(1274);
	v->a[51662] = 28;
	v->a[51663] = anon_sym_for;
	v->a[51664] = anon_sym_while;
	v->a[51665] = anon_sym_until;
	v->a[51666] = anon_sym_do;
	v->a[51667] = anon_sym_if;
	v->a[51668] = anon_sym_case;
	v->a[51669] = anon_sym_LPAREN;
	v->a[51670] = anon_sym_LBRACE;
	v->a[51671] = anon_sym_BANG;
	v->a[51672] = anon_sym_LT;
	v->a[51673] = anon_sym_GT;
	v->a[51674] = anon_sym_GT_GT;
	v->a[51675] = anon_sym_AMP_GT;
	v->a[51676] = anon_sym_AMP_GT_GT;
	v->a[51677] = anon_sym_LT_AMP;
	v->a[51678] = anon_sym_GT_AMP;
	v->a[51679] = anon_sym_GT_PIPE;
	small_parse_table_2584(v);
}

void	small_parse_table_2584(t_small_parse_table_array *v)
{
	v->a[51680] = anon_sym_LT_AMP_DASH;
	v->a[51681] = anon_sym_GT_AMP_DASH;
	v->a[51682] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51683] = anon_sym_DOLLAR;
	v->a[51684] = anon_sym_DQUOTE;
	v->a[51685] = sym_raw_string;
	v->a[51686] = sym_number;
	v->a[51687] = anon_sym_DOLLAR_LBRACE;
	v->a[51688] = anon_sym_DOLLAR_LPAREN;
	v->a[51689] = anon_sym_BQUOTE;
	v->a[51690] = sym_word;
	v->a[51691] = 6;
	v->a[51692] = actions(3);
	v->a[51693] = 1;
	v->a[51694] = sym_comment;
	v->a[51695] = actions(1092);
	v->a[51696] = 1;
	v->a[51697] = aux_sym_concatenation_token1;
	v->a[51698] = actions(1096);
	v->a[51699] = 1;
	small_parse_table_2585(v);
}

/* EOF small_parse_table_516.c */
