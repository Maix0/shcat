/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1827.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9135(t_small_parse_table_array *v)
{
	v->a[182700] = state(6426);
	v->a[182701] = 1;
	v->a[182702] = aux_sym__literal_repeat1;
	v->a[182703] = state(7021);
	v->a[182704] = 1;
	v->a[182705] = sym_last_case_item;
	v->a[182706] = actions(7224);
	v->a[182707] = 2;
	v->a[182708] = anon_sym_LPAREN_LPAREN;
	v->a[182709] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[182710] = actions(7232);
	v->a[182711] = 2;
	v->a[182712] = sym_raw_string;
	v->a[182713] = sym_ansi_c_string;
	v->a[182714] = actions(7240);
	v->a[182715] = 2;
	v->a[182716] = anon_sym_LT_LPAREN;
	v->a[182717] = anon_sym_GT_LPAREN;
	v->a[182718] = state(3477);
	v->a[182719] = 2;
	small_parse_table_9136(v);
}

void	small_parse_table_9136(t_small_parse_table_array *v)
{
	v->a[182720] = sym_case_item;
	v->a[182721] = aux_sym_case_statement_repeat1;
	v->a[182722] = state(6695);
	v->a[182723] = 2;
	v->a[182724] = sym_concatenation;
	v->a[182725] = sym__extglob_blob;
	v->a[182726] = state(6303);
	v->a[182727] = 9;
	v->a[182728] = sym_arithmetic_expansion;
	v->a[182729] = sym_brace_expression;
	v->a[182730] = sym_string;
	v->a[182731] = sym_translated_string;
	v->a[182732] = sym_number;
	v->a[182733] = sym_simple_expansion;
	v->a[182734] = sym_expansion;
	v->a[182735] = sym_command_substitution;
	v->a[182736] = sym_process_substitution;
	v->a[182737] = 7;
	v->a[182738] = actions(71);
	v->a[182739] = 1;
	small_parse_table_9137(v);
}

void	small_parse_table_9137(t_small_parse_table_array *v)
{
	v->a[182740] = sym_comment;
	v->a[182741] = actions(7719);
	v->a[182742] = 1;
	v->a[182743] = anon_sym_STAR_STAR;
	v->a[182744] = actions(7717);
	v->a[182745] = 2;
	v->a[182746] = anon_sym_PLUS_PLUS;
	v->a[182747] = anon_sym_DASH_DASH;
	v->a[182748] = actions(7723);
	v->a[182749] = 2;
	v->a[182750] = anon_sym_PLUS;
	v->a[182751] = anon_sym_DASH;
	v->a[182752] = actions(7721);
	v->a[182753] = 3;
	v->a[182754] = anon_sym_STAR;
	v->a[182755] = anon_sym_SLASH;
	v->a[182756] = anon_sym_PERCENT;
	v->a[182757] = actions(7248);
	v->a[182758] = 7;
	v->a[182759] = anon_sym_PIPE;
	small_parse_table_9138(v);
}

void	small_parse_table_9138(t_small_parse_table_array *v)
{
	v->a[182760] = anon_sym_CARET;
	v->a[182761] = anon_sym_AMP;
	v->a[182762] = anon_sym_LT;
	v->a[182763] = anon_sym_GT;
	v->a[182764] = anon_sym_LT_LT;
	v->a[182765] = anon_sym_GT_GT;
	v->a[182766] = actions(7274);
	v->a[182767] = 21;
	v->a[182768] = anon_sym_COMMA;
	v->a[182769] = anon_sym_PLUS_EQ;
	v->a[182770] = anon_sym_DASH_EQ;
	v->a[182771] = anon_sym_STAR_EQ;
	v->a[182772] = anon_sym_SLASH_EQ;
	v->a[182773] = anon_sym_PERCENT_EQ;
	v->a[182774] = anon_sym_STAR_STAR_EQ;
	v->a[182775] = anon_sym_LT_LT_EQ;
	v->a[182776] = anon_sym_GT_GT_EQ;
	v->a[182777] = anon_sym_AMP_EQ;
	v->a[182778] = anon_sym_CARET_EQ;
	v->a[182779] = anon_sym_PIPE_EQ;
	small_parse_table_9139(v);
}

void	small_parse_table_9139(t_small_parse_table_array *v)
{
	v->a[182780] = anon_sym_PIPE_PIPE;
	v->a[182781] = anon_sym_DASHo;
	v->a[182782] = anon_sym_AMP_AMP;
	v->a[182783] = anon_sym_DASHa;
	v->a[182784] = anon_sym_EQ_EQ;
	v->a[182785] = anon_sym_BANG_EQ;
	v->a[182786] = anon_sym_LT_EQ;
	v->a[182787] = anon_sym_GT_EQ;
	v->a[182788] = anon_sym_RPAREN;
	v->a[182789] = 3;
	v->a[182790] = actions(71);
	v->a[182791] = 1;
	v->a[182792] = sym_comment;
	v->a[182793] = actions(7035);
	v->a[182794] = 14;
	v->a[182795] = anon_sym_EQ;
	v->a[182796] = anon_sym_PIPE;
	v->a[182797] = anon_sym_CARET;
	v->a[182798] = anon_sym_AMP;
	v->a[182799] = anon_sym_LT;
	small_parse_table_9140(v);
}

/* EOF small_parse_table_1827.c */
