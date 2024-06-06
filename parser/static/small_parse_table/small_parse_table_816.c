/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_816.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4080(t_small_parse_table_array *v)
{
	v->a[81600] = actions(3);
	v->a[81601] = 1;
	v->a[81602] = sym_comment;
	v->a[81603] = actions(3066);
	v->a[81604] = 5;
	v->a[81605] = sym_file_descriptor;
	v->a[81606] = sym__concat;
	v->a[81607] = sym_test_operator;
	v->a[81608] = sym__brace_start;
	v->a[81609] = aux_sym_heredoc_redirect_token1;
	v->a[81610] = actions(3064);
	v->a[81611] = 25;
	v->a[81612] = anon_sym_AMP_AMP;
	v->a[81613] = anon_sym_PIPE_PIPE;
	v->a[81614] = anon_sym_LT;
	v->a[81615] = anon_sym_GT;
	v->a[81616] = anon_sym_GT_GT;
	v->a[81617] = anon_sym_AMP_GT;
	v->a[81618] = anon_sym_AMP_GT_GT;
	v->a[81619] = anon_sym_LT_AMP;
	small_parse_table_4081(v);
}

void	small_parse_table_4081(t_small_parse_table_array *v)
{
	v->a[81620] = anon_sym_GT_AMP;
	v->a[81621] = anon_sym_GT_PIPE;
	v->a[81622] = anon_sym_LT_AMP_DASH;
	v->a[81623] = anon_sym_GT_AMP_DASH;
	v->a[81624] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81625] = aux_sym_concatenation_token1;
	v->a[81626] = anon_sym_DOLLAR;
	v->a[81627] = sym__special_character;
	v->a[81628] = anon_sym_DQUOTE;
	v->a[81629] = sym_raw_string;
	v->a[81630] = aux_sym_number_token1;
	v->a[81631] = aux_sym_number_token2;
	v->a[81632] = anon_sym_DOLLAR_LBRACE;
	v->a[81633] = anon_sym_DOLLAR_LPAREN;
	v->a[81634] = anon_sym_BQUOTE;
	v->a[81635] = anon_sym_DOLLAR_BQUOTE;
	v->a[81636] = sym_word;
	v->a[81637] = 22;
	v->a[81638] = actions(57);
	v->a[81639] = 1;
	small_parse_table_4082(v);
}

void	small_parse_table_4082(t_small_parse_table_array *v)
{
	v->a[81640] = sym_comment;
	v->a[81641] = actions(4328);
	v->a[81642] = 1;
	v->a[81643] = sym_word;
	v->a[81644] = actions(4340);
	v->a[81645] = 1;
	v->a[81646] = anon_sym_DOLLAR;
	v->a[81647] = actions(4346);
	v->a[81648] = 1;
	v->a[81649] = aux_sym_number_token1;
	v->a[81650] = actions(4348);
	v->a[81651] = 1;
	v->a[81652] = aux_sym_number_token2;
	v->a[81653] = actions(4352);
	v->a[81654] = 1;
	v->a[81655] = anon_sym_DOLLAR_LPAREN;
	v->a[81656] = actions(4360);
	v->a[81657] = 1;
	v->a[81658] = sym_extglob_pattern;
	v->a[81659] = actions(4362);
	small_parse_table_4083(v);
}

void	small_parse_table_4083(t_small_parse_table_array *v)
{
	v->a[81660] = 1;
	v->a[81661] = sym__brace_start;
	v->a[81662] = actions(4548);
	v->a[81663] = 1;
	v->a[81664] = anon_sym_LPAREN;
	v->a[81665] = actions(4550);
	v->a[81666] = 1;
	v->a[81667] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81668] = actions(4552);
	v->a[81669] = 1;
	v->a[81670] = sym__special_character;
	v->a[81671] = actions(4554);
	v->a[81672] = 1;
	v->a[81673] = anon_sym_DQUOTE;
	v->a[81674] = actions(4556);
	v->a[81675] = 1;
	v->a[81676] = anon_sym_DOLLAR_LBRACE;
	v->a[81677] = actions(4558);
	v->a[81678] = 1;
	v->a[81679] = anon_sym_BQUOTE;
	small_parse_table_4084(v);
}

void	small_parse_table_4084(t_small_parse_table_array *v)
{
	v->a[81680] = actions(4560);
	v->a[81681] = 1;
	v->a[81682] = anon_sym_DOLLAR_BQUOTE;
	v->a[81683] = actions(4574);
	v->a[81684] = 1;
	v->a[81685] = anon_sym_esac;
	v->a[81686] = state(3393);
	v->a[81687] = 1;
	v->a[81688] = aux_sym__literal_repeat1;
	v->a[81689] = state(4030);
	v->a[81690] = 1;
	v->a[81691] = sym_last_case_item;
	v->a[81692] = actions(4358);
	v->a[81693] = 2;
	v->a[81694] = sym_test_operator;
	v->a[81695] = sym_raw_string;
	v->a[81696] = state(1817);
	v->a[81697] = 2;
	v->a[81698] = sym_case_item;
	v->a[81699] = aux_sym_case_statement_repeat1;
	small_parse_table_4085(v);
}

/* EOF small_parse_table_816.c */
