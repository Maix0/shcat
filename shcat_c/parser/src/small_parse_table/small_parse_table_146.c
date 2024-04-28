/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_146.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_730(t_small_parse_table_array *v)
{
	v->a[14600] = sym_string;
	v->a[14601] = sym_translated_string;
	v->a[14602] = sym_number;
	v->a[14603] = sym_simple_expansion;
	v->a[14604] = sym_expansion;
	v->a[14605] = sym_command_substitution;
	v->a[14606] = sym_process_substitution;
	v->a[14607] = actions(2494);
	v->a[14608] = 22;
	v->a[14609] = anon_sym_SEMI;
	v->a[14610] = anon_sym_PIPE_PIPE;
	v->a[14611] = anon_sym_AMP_AMP;
	v->a[14612] = anon_sym_PIPE;
	v->a[14613] = anon_sym_AMP;
	v->a[14614] = anon_sym_LT;
	v->a[14615] = anon_sym_GT;
	v->a[14616] = anon_sym_LT_LT;
	v->a[14617] = anon_sym_GT_GT;
	v->a[14618] = anon_sym_esac;
	v->a[14619] = anon_sym_SEMI_SEMI;
	small_parse_table_731(v);
}

void	small_parse_table_731(t_small_parse_table_array *v)
{
	v->a[14620] = anon_sym_SEMI_AMP;
	v->a[14621] = anon_sym_SEMI_SEMI_AMP;
	v->a[14622] = anon_sym_PIPE_AMP;
	v->a[14623] = anon_sym_AMP_GT;
	v->a[14624] = anon_sym_AMP_GT_GT;
	v->a[14625] = anon_sym_LT_AMP;
	v->a[14626] = anon_sym_GT_AMP;
	v->a[14627] = anon_sym_GT_PIPE;
	v->a[14628] = anon_sym_LT_AMP_DASH;
	v->a[14629] = anon_sym_GT_AMP_DASH;
	v->a[14630] = anon_sym_LT_LT_DASH;
	v->a[14631] = 6;
	v->a[14632] = actions(3);
	v->a[14633] = 1;
	v->a[14634] = sym_comment;
	v->a[14635] = state(1826);
	v->a[14636] = 1;
	v->a[14637] = aux_sym__literal_repeat1;
	v->a[14638] = state(2201);
	v->a[14639] = 1;
	small_parse_table_732(v);
}

void	small_parse_table_732(t_small_parse_table_array *v)
{
	v->a[14640] = sym_concatenation;
	v->a[14641] = actions(2496);
	v->a[14642] = 6;
	v->a[14643] = sym_file_descriptor;
	v->a[14644] = sym_variable_name;
	v->a[14645] = sym_test_operator;
	v->a[14646] = sym__brace_start;
	v->a[14647] = ts_builtin_sym_end;
	v->a[14648] = aux_sym_heredoc_redirect_token1;
	v->a[14649] = state(1446);
	v->a[14650] = 9;
	v->a[14651] = sym_arithmetic_expansion;
	v->a[14652] = sym_brace_expression;
	v->a[14653] = sym_string;
	v->a[14654] = sym_translated_string;
	v->a[14655] = sym_number;
	v->a[14656] = sym_simple_expansion;
	v->a[14657] = sym_expansion;
	v->a[14658] = sym_command_substitution;
	v->a[14659] = sym_process_substitution;
	small_parse_table_733(v);
}

void	small_parse_table_733(t_small_parse_table_array *v)
{
	v->a[14660] = actions(2494);
	v->a[14661] = 37;
	v->a[14662] = anon_sym_LPAREN_LPAREN;
	v->a[14663] = anon_sym_SEMI;
	v->a[14664] = anon_sym_PIPE_PIPE;
	v->a[14665] = anon_sym_AMP_AMP;
	v->a[14666] = anon_sym_PIPE;
	v->a[14667] = anon_sym_AMP;
	v->a[14668] = anon_sym_LT;
	v->a[14669] = anon_sym_GT;
	v->a[14670] = anon_sym_LT_LT;
	v->a[14671] = anon_sym_GT_GT;
	v->a[14672] = anon_sym_SEMI_SEMI;
	v->a[14673] = anon_sym_PIPE_AMP;
	v->a[14674] = anon_sym_AMP_GT;
	v->a[14675] = anon_sym_AMP_GT_GT;
	v->a[14676] = anon_sym_LT_AMP;
	v->a[14677] = anon_sym_GT_AMP;
	v->a[14678] = anon_sym_GT_PIPE;
	v->a[14679] = anon_sym_LT_AMP_DASH;
	small_parse_table_734(v);
}

void	small_parse_table_734(t_small_parse_table_array *v)
{
	v->a[14680] = anon_sym_GT_AMP_DASH;
	v->a[14681] = anon_sym_LT_LT_DASH;
	v->a[14682] = anon_sym_LT_LT_LT;
	v->a[14683] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14684] = anon_sym_DOLLAR_LBRACK;
	v->a[14685] = anon_sym_DOLLAR;
	v->a[14686] = sym__special_character;
	v->a[14687] = anon_sym_DQUOTE;
	v->a[14688] = sym_raw_string;
	v->a[14689] = sym_ansi_c_string;
	v->a[14690] = aux_sym_number_token1;
	v->a[14691] = aux_sym_number_token2;
	v->a[14692] = anon_sym_DOLLAR_LBRACE;
	v->a[14693] = anon_sym_DOLLAR_LPAREN;
	v->a[14694] = anon_sym_BQUOTE;
	v->a[14695] = anon_sym_DOLLAR_BQUOTE;
	v->a[14696] = anon_sym_LT_LPAREN;
	v->a[14697] = anon_sym_GT_LPAREN;
	v->a[14698] = sym_word;
	v->a[14699] = 8;
	small_parse_table_735(v);
}

/* EOF small_parse_table_146.c */
