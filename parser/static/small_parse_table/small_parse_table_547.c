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
	v->a[54700] = sym_comment;
	v->a[54701] = actions(692);
	v->a[54702] = 1;
	v->a[54703] = anon_sym_PIPE;
	v->a[54704] = actions(862);
	v->a[54705] = 1;
	v->a[54706] = ts_builtin_sym_end;
	v->a[54707] = actions(1863);
	v->a[54708] = 1;
	v->a[54709] = aux_sym_heredoc_redirect_token1;
	v->a[54710] = actions(1865);
	v->a[54711] = 1;
	v->a[54712] = sym_file_descriptor;
	v->a[54713] = state(763);
	v->a[54714] = 1;
	v->a[54715] = sym_terminator;
	v->a[54716] = actions(700);
	v->a[54717] = 2;
	v->a[54718] = anon_sym_LT_LT;
	v->a[54719] = anon_sym_LT_LT_DASH;
	small_parse_table_2736(v);
}

void	small_parse_table_2736(t_small_parse_table_array *v)
{
	v->a[54720] = actions(719);
	v->a[54721] = 2;
	v->a[54722] = anon_sym_AMP_AMP;
	v->a[54723] = anon_sym_PIPE_PIPE;
	v->a[54724] = actions(717);
	v->a[54725] = 3;
	v->a[54726] = anon_sym_SEMI_SEMI;
	v->a[54727] = anon_sym_AMP;
	v->a[54728] = anon_sym_SEMI;
	v->a[54729] = state(1086);
	v->a[54730] = 3;
	v->a[54731] = sym_file_redirect;
	v->a[54732] = sym_heredoc_redirect;
	v->a[54733] = aux_sym_redirected_statement_repeat1;
	v->a[54734] = actions(1861);
	v->a[54735] = 7;
	v->a[54736] = anon_sym_LT;
	v->a[54737] = anon_sym_GT;
	v->a[54738] = anon_sym_GT_GT;
	v->a[54739] = anon_sym_LT_AMP;
	small_parse_table_2737(v);
}

void	small_parse_table_2737(t_small_parse_table_array *v)
{
	v->a[54740] = anon_sym_GT_AMP;
	v->a[54741] = anon_sym_GT_PIPE;
	v->a[54742] = anon_sym_LT_GT;
	v->a[54743] = 16;
	v->a[54744] = actions(3);
	v->a[54745] = 1;
	v->a[54746] = sym_comment;
	v->a[54747] = actions(1637);
	v->a[54748] = 1;
	v->a[54749] = anon_sym_LPAREN;
	v->a[54750] = actions(1641);
	v->a[54751] = 1;
	v->a[54752] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54753] = actions(1643);
	v->a[54754] = 1;
	v->a[54755] = anon_sym_DOLLAR;
	v->a[54756] = actions(1645);
	v->a[54757] = 1;
	v->a[54758] = anon_sym_DQUOTE;
	v->a[54759] = actions(1647);
	small_parse_table_2738(v);
}

void	small_parse_table_2738(t_small_parse_table_array *v)
{
	v->a[54760] = 1;
	v->a[54761] = anon_sym_DOLLAR_LBRACE;
	v->a[54762] = actions(1649);
	v->a[54763] = 1;
	v->a[54764] = anon_sym_DOLLAR_LPAREN;
	v->a[54765] = actions(1651);
	v->a[54766] = 1;
	v->a[54767] = anon_sym_BQUOTE;
	v->a[54768] = actions(1653);
	v->a[54769] = 1;
	v->a[54770] = sym_extglob_pattern;
	v->a[54771] = actions(1873);
	v->a[54772] = 1;
	v->a[54773] = anon_sym_esac;
	v->a[54774] = state(1097);
	v->a[54775] = 1;
	v->a[54776] = aux_sym_case_statement_repeat1;
	v->a[54777] = state(1713);
	v->a[54778] = 1;
	v->a[54779] = sym_case_item;
	small_parse_table_2739(v);
}

void	small_parse_table_2739(t_small_parse_table_array *v)
{
	v->a[54780] = state(2059);
	v->a[54781] = 1;
	v->a[54782] = sym__case_item_last;
	v->a[54783] = state(1873);
	v->a[54784] = 2;
	v->a[54785] = sym_concatenation;
	v->a[54786] = sym__extglob_blob;
	v->a[54787] = actions(1633);
	v->a[54788] = 3;
	v->a[54789] = sym_raw_string;
	v->a[54790] = sym_number;
	v->a[54791] = sym_word;
	v->a[54792] = state(1806);
	v->a[54793] = 5;
	v->a[54794] = sym_arithmetic_expansion;
	v->a[54795] = sym_string;
	v->a[54796] = sym_simple_expansion;
	v->a[54797] = sym_expansion;
	v->a[54798] = sym_command_substitution;
	v->a[54799] = 16;
	small_parse_table_2740(v);
}

/* EOF small_parse_table_547.c */
