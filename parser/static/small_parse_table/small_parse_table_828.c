/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_828.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4140(t_small_parse_table_array *v)
{
	v->a[82800] = state(1109);
	v->a[82801] = 5;
	v->a[82802] = sym_arithmetic_expansion;
	v->a[82803] = sym_string;
	v->a[82804] = sym_simple_expansion;
	v->a[82805] = sym_expansion;
	v->a[82806] = sym_command_substitution;
	v->a[82807] = 10;
	v->a[82808] = actions(3);
	v->a[82809] = 1;
	v->a[82810] = sym_comment;
	v->a[82811] = actions(859);
	v->a[82812] = 1;
	v->a[82813] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82814] = actions(861);
	v->a[82815] = 1;
	v->a[82816] = anon_sym_DOLLAR;
	v->a[82817] = actions(863);
	v->a[82818] = 1;
	v->a[82819] = anon_sym_DQUOTE;
	small_parse_table_4141(v);
}

void	small_parse_table_4141(t_small_parse_table_array *v)
{
	v->a[82820] = actions(865);
	v->a[82821] = 1;
	v->a[82822] = anon_sym_DOLLAR_LBRACE;
	v->a[82823] = actions(867);
	v->a[82824] = 1;
	v->a[82825] = anon_sym_DOLLAR_LPAREN;
	v->a[82826] = actions(869);
	v->a[82827] = 1;
	v->a[82828] = anon_sym_BQUOTE;
	v->a[82829] = state(1373);
	v->a[82830] = 2;
	v->a[82831] = sym_concatenation;
	v->a[82832] = aux_sym_for_statement_repeat1;
	v->a[82833] = actions(2479);
	v->a[82834] = 3;
	v->a[82835] = sym_raw_string;
	v->a[82836] = sym_number;
	v->a[82837] = sym_word;
	v->a[82838] = state(1669);
	v->a[82839] = 5;
	small_parse_table_4142(v);
}

void	small_parse_table_4142(t_small_parse_table_array *v)
{
	v->a[82840] = sym_arithmetic_expansion;
	v->a[82841] = sym_string;
	v->a[82842] = sym_simple_expansion;
	v->a[82843] = sym_expansion;
	v->a[82844] = sym_command_substitution;
	v->a[82845] = 10;
	v->a[82846] = actions(3);
	v->a[82847] = 1;
	v->a[82848] = sym_comment;
	v->a[82849] = actions(1709);
	v->a[82850] = 1;
	v->a[82851] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82852] = actions(1711);
	v->a[82853] = 1;
	v->a[82854] = anon_sym_DOLLAR;
	v->a[82855] = actions(1713);
	v->a[82856] = 1;
	v->a[82857] = anon_sym_DQUOTE;
	v->a[82858] = actions(1715);
	v->a[82859] = 1;
	small_parse_table_4143(v);
}

void	small_parse_table_4143(t_small_parse_table_array *v)
{
	v->a[82860] = anon_sym_DOLLAR_LBRACE;
	v->a[82861] = actions(1717);
	v->a[82862] = 1;
	v->a[82863] = anon_sym_DOLLAR_LPAREN;
	v->a[82864] = actions(1719);
	v->a[82865] = 1;
	v->a[82866] = anon_sym_BQUOTE;
	v->a[82867] = state(801);
	v->a[82868] = 2;
	v->a[82869] = sym_concatenation;
	v->a[82870] = aux_sym_for_statement_repeat1;
	v->a[82871] = actions(1707);
	v->a[82872] = 3;
	v->a[82873] = sym_raw_string;
	v->a[82874] = sym_number;
	v->a[82875] = sym_word;
	v->a[82876] = state(950);
	v->a[82877] = 5;
	v->a[82878] = sym_arithmetic_expansion;
	v->a[82879] = sym_string;
	small_parse_table_4144(v);
}

void	small_parse_table_4144(t_small_parse_table_array *v)
{
	v->a[82880] = sym_simple_expansion;
	v->a[82881] = sym_expansion;
	v->a[82882] = sym_command_substitution;
	v->a[82883] = 3;
	v->a[82884] = actions(3);
	v->a[82885] = 1;
	v->a[82886] = sym_comment;
	v->a[82887] = actions(1104);
	v->a[82888] = 3;
	v->a[82889] = sym_file_descriptor;
	v->a[82890] = sym__concat;
	v->a[82891] = aux_sym_heredoc_redirect_token1;
	v->a[82892] = actions(1102);
	v->a[82893] = 13;
	v->a[82894] = anon_sym_AMP_AMP;
	v->a[82895] = anon_sym_PIPE_PIPE;
	v->a[82896] = anon_sym_LT;
	v->a[82897] = anon_sym_GT;
	v->a[82898] = anon_sym_GT_GT;
	v->a[82899] = anon_sym_AMP_GT;
	small_parse_table_4145(v);
}

/* EOF small_parse_table_828.c */
