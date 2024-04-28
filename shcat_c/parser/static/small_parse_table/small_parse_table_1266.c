/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1266.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6330(t_small_parse_table_array *v)
{
	v->a[126600] = 1;
	v->a[126601] = anon_sym_esac;
	v->a[126602] = actions(6612);
	v->a[126603] = 1;
	v->a[126604] = aux_sym_heredoc_redirect_token1;
	v->a[126605] = state(6426);
	v->a[126606] = 1;
	v->a[126607] = aux_sym__literal_repeat1;
	v->a[126608] = state(7451);
	v->a[126609] = 1;
	v->a[126610] = sym_last_case_item;
	v->a[126611] = actions(6476);
	v->a[126612] = 2;
	v->a[126613] = anon_sym_LPAREN_LPAREN;
	v->a[126614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126615] = actions(6506);
	v->a[126616] = 2;
	v->a[126617] = anon_sym_LT_LPAREN;
	v->a[126618] = anon_sym_GT_LPAREN;
	v->a[126619] = state(3420);
	small_parse_table_6331(v);
}

void	small_parse_table_6331(t_small_parse_table_array *v)
{
	v->a[126620] = 2;
	v->a[126621] = sym_case_item;
	v->a[126622] = aux_sym_case_statement_repeat1;
	v->a[126623] = state(6695);
	v->a[126624] = 2;
	v->a[126625] = sym_concatenation;
	v->a[126626] = sym__extglob_blob;
	v->a[126627] = actions(6474);
	v->a[126628] = 3;
	v->a[126629] = sym_raw_string;
	v->a[126630] = sym_ansi_c_string;
	v->a[126631] = sym_word;
	v->a[126632] = actions(6608);
	v->a[126633] = 3;
	v->a[126634] = anon_sym_SEMI;
	v->a[126635] = anon_sym_AMP;
	v->a[126636] = anon_sym_SEMI_SEMI;
	v->a[126637] = state(6303);
	v->a[126638] = 9;
	v->a[126639] = sym_arithmetic_expansion;
	small_parse_table_6332(v);
}

void	small_parse_table_6332(t_small_parse_table_array *v)
{
	v->a[126640] = sym_brace_expression;
	v->a[126641] = sym_string;
	v->a[126642] = sym_translated_string;
	v->a[126643] = sym_number;
	v->a[126644] = sym_simple_expansion;
	v->a[126645] = sym_expansion;
	v->a[126646] = sym_command_substitution;
	v->a[126647] = sym_process_substitution;
	v->a[126648] = 26;
	v->a[126649] = actions(3);
	v->a[126650] = 1;
	v->a[126651] = sym_comment;
	v->a[126652] = actions(6480);
	v->a[126653] = 1;
	v->a[126654] = anon_sym_LPAREN;
	v->a[126655] = actions(6486);
	v->a[126656] = 1;
	v->a[126657] = anon_sym_DOLLAR_LBRACK;
	v->a[126658] = actions(6488);
	v->a[126659] = 1;
	small_parse_table_6333(v);
}

void	small_parse_table_6333(t_small_parse_table_array *v)
{
	v->a[126660] = anon_sym_DOLLAR;
	v->a[126661] = actions(6490);
	v->a[126662] = 1;
	v->a[126663] = sym__special_character;
	v->a[126664] = actions(6492);
	v->a[126665] = 1;
	v->a[126666] = anon_sym_DQUOTE;
	v->a[126667] = actions(6494);
	v->a[126668] = 1;
	v->a[126669] = aux_sym_number_token1;
	v->a[126670] = actions(6496);
	v->a[126671] = 1;
	v->a[126672] = aux_sym_number_token2;
	v->a[126673] = actions(6498);
	v->a[126674] = 1;
	v->a[126675] = anon_sym_DOLLAR_LBRACE;
	v->a[126676] = actions(6500);
	v->a[126677] = 1;
	v->a[126678] = anon_sym_DOLLAR_LPAREN;
	v->a[126679] = actions(6502);
	small_parse_table_6334(v);
}

void	small_parse_table_6334(t_small_parse_table_array *v)
{
	v->a[126680] = 1;
	v->a[126681] = anon_sym_BQUOTE;
	v->a[126682] = actions(6504);
	v->a[126683] = 1;
	v->a[126684] = anon_sym_DOLLAR_BQUOTE;
	v->a[126685] = actions(6508);
	v->a[126686] = 1;
	v->a[126687] = sym_test_operator;
	v->a[126688] = actions(6510);
	v->a[126689] = 1;
	v->a[126690] = sym_extglob_pattern;
	v->a[126691] = actions(6512);
	v->a[126692] = 1;
	v->a[126693] = sym__brace_start;
	v->a[126694] = actions(6616);
	v->a[126695] = 1;
	v->a[126696] = anon_sym_esac;
	v->a[126697] = actions(6618);
	v->a[126698] = 1;
	v->a[126699] = aux_sym_heredoc_redirect_token1;
	small_parse_table_6335(v);
}

/* EOF small_parse_table_1266.c */
