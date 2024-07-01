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
	v->a[54700] = anon_sym_LPAREN;
	v->a[54701] = actions(1638);
	v->a[54702] = 1;
	v->a[54703] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54704] = actions(1640);
	v->a[54705] = 1;
	v->a[54706] = anon_sym_DOLLAR;
	v->a[54707] = actions(1642);
	v->a[54708] = 1;
	v->a[54709] = anon_sym_DQUOTE;
	v->a[54710] = actions(1644);
	v->a[54711] = 1;
	v->a[54712] = anon_sym_DOLLAR_LBRACE;
	v->a[54713] = actions(1646);
	v->a[54714] = 1;
	v->a[54715] = anon_sym_DOLLAR_LPAREN;
	v->a[54716] = actions(1648);
	v->a[54717] = 1;
	v->a[54718] = anon_sym_BQUOTE;
	v->a[54719] = actions(1650);
	small_parse_table_2736(v);
}

void	small_parse_table_2736(t_small_parse_table_array *v)
{
	v->a[54720] = 1;
	v->a[54721] = sym_extglob_pattern;
	v->a[54722] = actions(1859);
	v->a[54723] = 1;
	v->a[54724] = anon_sym_esac;
	v->a[54725] = state(1062);
	v->a[54726] = 1;
	v->a[54727] = aux_sym_case_statement_repeat1;
	v->a[54728] = state(1713);
	v->a[54729] = 1;
	v->a[54730] = sym_case_item;
	v->a[54731] = state(1920);
	v->a[54732] = 1;
	v->a[54733] = sym__case_item_last;
	v->a[54734] = state(1871);
	v->a[54735] = 2;
	v->a[54736] = sym_concatenation;
	v->a[54737] = sym__extglob_blob;
	v->a[54738] = actions(1630);
	v->a[54739] = 3;
	small_parse_table_2737(v);
}

void	small_parse_table_2737(t_small_parse_table_array *v)
{
	v->a[54740] = sym_raw_string;
	v->a[54741] = sym_number;
	v->a[54742] = sym_word;
	v->a[54743] = state(1804);
	v->a[54744] = 5;
	v->a[54745] = sym_arithmetic_expansion;
	v->a[54746] = sym_string;
	v->a[54747] = sym_simple_expansion;
	v->a[54748] = sym_expansion;
	v->a[54749] = sym_command_substitution;
	v->a[54750] = 6;
	v->a[54751] = actions(3);
	v->a[54752] = 1;
	v->a[54753] = sym_comment;
	v->a[54754] = actions(1845);
	v->a[54755] = 1;
	v->a[54756] = aux_sym_concatenation_token1;
	v->a[54757] = actions(1861);
	v->a[54758] = 1;
	v->a[54759] = sym__concat;
	small_parse_table_2738(v);
}

void	small_parse_table_2738(t_small_parse_table_array *v)
{
	v->a[54760] = state(899);
	v->a[54761] = 1;
	v->a[54762] = aux_sym_concatenation_repeat1;
	v->a[54763] = actions(1047);
	v->a[54764] = 3;
	v->a[54765] = sym_file_descriptor;
	v->a[54766] = sym_variable_name;
	v->a[54767] = aux_sym_heredoc_redirect_token1;
	v->a[54768] = actions(1043);
	v->a[54769] = 16;
	v->a[54770] = anon_sym_PIPE;
	v->a[54771] = anon_sym_RPAREN;
	v->a[54772] = anon_sym_SEMI_SEMI;
	v->a[54773] = anon_sym_AMP_AMP;
	v->a[54774] = anon_sym_PIPE_PIPE;
	v->a[54775] = anon_sym_LT;
	v->a[54776] = anon_sym_GT;
	v->a[54777] = anon_sym_GT_GT;
	v->a[54778] = anon_sym_LT_AMP;
	v->a[54779] = anon_sym_GT_AMP;
	small_parse_table_2739(v);
}

void	small_parse_table_2739(t_small_parse_table_array *v)
{
	v->a[54780] = anon_sym_GT_PIPE;
	v->a[54781] = anon_sym_LT_GT;
	v->a[54782] = anon_sym_LT_LT;
	v->a[54783] = anon_sym_LT_LT_DASH;
	v->a[54784] = anon_sym_AMP;
	v->a[54785] = anon_sym_SEMI;
	v->a[54786] = 3;
	v->a[54787] = actions(3);
	v->a[54788] = 1;
	v->a[54789] = sym_comment;
	v->a[54790] = actions(1093);
	v->a[54791] = 2;
	v->a[54792] = sym_file_descriptor;
	v->a[54793] = sym__concat;
	v->a[54794] = actions(1088);
	v->a[54795] = 20;
	v->a[54796] = anon_sym_AMP_AMP;
	v->a[54797] = anon_sym_PIPE_PIPE;
	v->a[54798] = anon_sym_LT;
	v->a[54799] = anon_sym_GT;
	small_parse_table_2740(v);
}

/* EOF small_parse_table_547.c */
