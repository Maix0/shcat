/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_707.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3535(t_small_parse_table_array *v)
{
	v->a[70700] = sym_string;
	v->a[70701] = sym_simple_expansion;
	v->a[70702] = sym_expansion;
	v->a[70703] = sym_command_substitution;
	v->a[70704] = 10;
	v->a[70705] = actions(3);
	v->a[70706] = 1;
	v->a[70707] = sym_comment;
	v->a[70708] = actions(2400);
	v->a[70709] = 1;
	v->a[70710] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70711] = actions(2404);
	v->a[70712] = 1;
	v->a[70713] = anon_sym_DQUOTE;
	v->a[70714] = actions(2406);
	v->a[70715] = 1;
	v->a[70716] = anon_sym_DOLLAR_LBRACE;
	v->a[70717] = actions(2408);
	v->a[70718] = 1;
	v->a[70719] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3536(v);
}

void	small_parse_table_3536(t_small_parse_table_array *v)
{
	v->a[70720] = actions(2410);
	v->a[70721] = 1;
	v->a[70722] = anon_sym_BQUOTE;
	v->a[70723] = actions(2532);
	v->a[70724] = 1;
	v->a[70725] = anon_sym_DOLLAR;
	v->a[70726] = state(247);
	v->a[70727] = 2;
	v->a[70728] = sym_concatenation;
	v->a[70729] = aux_sym_for_statement_repeat1;
	v->a[70730] = actions(2772);
	v->a[70731] = 3;
	v->a[70732] = sym_raw_string;
	v->a[70733] = sym_number;
	v->a[70734] = sym_word;
	v->a[70735] = state(459);
	v->a[70736] = 5;
	v->a[70737] = sym_arithmetic_expansion;
	v->a[70738] = sym_string;
	v->a[70739] = sym_simple_expansion;
	small_parse_table_3537(v);
}

void	small_parse_table_3537(t_small_parse_table_array *v)
{
	v->a[70740] = sym_expansion;
	v->a[70741] = sym_command_substitution;
	v->a[70742] = 3;
	v->a[70743] = actions(664);
	v->a[70744] = 1;
	v->a[70745] = sym_comment;
	v->a[70746] = actions(893);
	v->a[70747] = 4;
	v->a[70748] = anon_sym_PIPE;
	v->a[70749] = anon_sym_LT;
	v->a[70750] = anon_sym_GT;
	v->a[70751] = anon_sym_LT_LT;
	v->a[70752] = actions(895);
	v->a[70753] = 12;
	v->a[70754] = sym_file_descriptor;
	v->a[70755] = sym__concat;
	v->a[70756] = sym_variable_name;
	v->a[70757] = anon_sym_AMP_AMP;
	v->a[70758] = anon_sym_PIPE_PIPE;
	v->a[70759] = anon_sym_GT_GT;
	small_parse_table_3538(v);
}

void	small_parse_table_3538(t_small_parse_table_array *v)
{
	v->a[70760] = anon_sym_LT_AMP;
	v->a[70761] = anon_sym_GT_AMP;
	v->a[70762] = anon_sym_GT_PIPE;
	v->a[70763] = anon_sym_LT_GT;
	v->a[70764] = anon_sym_LT_LT_DASH;
	v->a[70765] = aux_sym_concatenation_token1;
	v->a[70766] = 3;
	v->a[70767] = actions(664);
	v->a[70768] = 1;
	v->a[70769] = sym_comment;
	v->a[70770] = actions(764);
	v->a[70771] = 4;
	v->a[70772] = anon_sym_PIPE;
	v->a[70773] = anon_sym_LT;
	v->a[70774] = anon_sym_GT;
	v->a[70775] = anon_sym_LT_LT;
	v->a[70776] = actions(766);
	v->a[70777] = 12;
	v->a[70778] = sym_file_descriptor;
	v->a[70779] = sym__concat;
	small_parse_table_3539(v);
}

void	small_parse_table_3539(t_small_parse_table_array *v)
{
	v->a[70780] = sym_variable_name;
	v->a[70781] = anon_sym_AMP_AMP;
	v->a[70782] = anon_sym_PIPE_PIPE;
	v->a[70783] = anon_sym_GT_GT;
	v->a[70784] = anon_sym_LT_AMP;
	v->a[70785] = anon_sym_GT_AMP;
	v->a[70786] = anon_sym_GT_PIPE;
	v->a[70787] = anon_sym_LT_GT;
	v->a[70788] = anon_sym_LT_LT_DASH;
	v->a[70789] = aux_sym_concatenation_token1;
	v->a[70790] = 10;
	v->a[70791] = actions(3);
	v->a[70792] = 1;
	v->a[70793] = sym_comment;
	v->a[70794] = actions(2340);
	v->a[70795] = 1;
	v->a[70796] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70797] = actions(2344);
	v->a[70798] = 1;
	v->a[70799] = anon_sym_DQUOTE;
	small_parse_table_3540(v);
}

/* EOF small_parse_table_707.c */
