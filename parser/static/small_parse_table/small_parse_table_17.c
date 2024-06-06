/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_17.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_85(t_small_parse_table_array *v)
{
	v->a[1700] = state(879);
	v->a[1701] = 1;
	v->a[1702] = aux_sym__literal_repeat1;
	v->a[1703] = actions(1037);
	v->a[1704] = 2;
	v->a[1705] = sym_raw_string;
	v->a[1706] = sym_word;
	v->a[1707] = actions(1041);
	v->a[1708] = 2;
	v->a[1709] = sym_file_descriptor;
	v->a[1710] = aux_sym_heredoc_redirect_token1;
	v->a[1711] = state(275);
	v->a[1712] = 2;
	v->a[1713] = sym_concatenation;
	v->a[1714] = aux_sym_unset_command_repeat1;
	v->a[1715] = state(566);
	v->a[1716] = 7;
	v->a[1717] = sym_arithmetic_expansion;
	v->a[1718] = sym_brace_expression;
	v->a[1719] = sym_string;
	small_parse_table_86(v);
}

void	small_parse_table_86(t_small_parse_table_array *v)
{
	v->a[1720] = sym_number;
	v->a[1721] = sym_simple_expansion;
	v->a[1722] = sym_expansion;
	v->a[1723] = sym_command_substitution;
	v->a[1724] = actions(1039);
	v->a[1725] = 22;
	v->a[1726] = anon_sym_esac;
	v->a[1727] = anon_sym_PIPE;
	v->a[1728] = anon_sym_SEMI_SEMI;
	v->a[1729] = anon_sym_SEMI_AMP;
	v->a[1730] = anon_sym_SEMI_SEMI_AMP;
	v->a[1731] = anon_sym_PIPE_AMP;
	v->a[1732] = anon_sym_AMP_AMP;
	v->a[1733] = anon_sym_PIPE_PIPE;
	v->a[1734] = anon_sym_LT;
	v->a[1735] = anon_sym_GT;
	v->a[1736] = anon_sym_GT_GT;
	v->a[1737] = anon_sym_AMP_GT;
	v->a[1738] = anon_sym_AMP_GT_GT;
	v->a[1739] = anon_sym_LT_AMP;
	small_parse_table_87(v);
}

void	small_parse_table_87(t_small_parse_table_array *v)
{
	v->a[1740] = anon_sym_GT_AMP;
	v->a[1741] = anon_sym_GT_PIPE;
	v->a[1742] = anon_sym_LT_AMP_DASH;
	v->a[1743] = anon_sym_GT_AMP_DASH;
	v->a[1744] = anon_sym_LT_LT;
	v->a[1745] = anon_sym_LT_LT_DASH;
	v->a[1746] = anon_sym_AMP;
	v->a[1747] = anon_sym_SEMI;
	v->a[1748] = 21;
	v->a[1749] = actions(3);
	v->a[1750] = 1;
	v->a[1751] = sym_comment;
	v->a[1752] = actions(1071);
	v->a[1753] = 1;
	v->a[1754] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1755] = actions(1073);
	v->a[1756] = 1;
	v->a[1757] = anon_sym_DOLLAR;
	v->a[1758] = actions(1075);
	v->a[1759] = 1;
	small_parse_table_88(v);
}

void	small_parse_table_88(t_small_parse_table_array *v)
{
	v->a[1760] = sym__special_character;
	v->a[1761] = actions(1077);
	v->a[1762] = 1;
	v->a[1763] = anon_sym_DQUOTE;
	v->a[1764] = actions(1079);
	v->a[1765] = 1;
	v->a[1766] = aux_sym_number_token1;
	v->a[1767] = actions(1081);
	v->a[1768] = 1;
	v->a[1769] = aux_sym_number_token2;
	v->a[1770] = actions(1083);
	v->a[1771] = 1;
	v->a[1772] = anon_sym_DOLLAR_LBRACE;
	v->a[1773] = actions(1085);
	v->a[1774] = 1;
	v->a[1775] = anon_sym_DOLLAR_LPAREN;
	v->a[1776] = actions(1087);
	v->a[1777] = 1;
	v->a[1778] = anon_sym_BQUOTE;
	v->a[1779] = actions(1089);
	small_parse_table_89(v);
}

void	small_parse_table_89(t_small_parse_table_array *v)
{
	v->a[1780] = 1;
	v->a[1781] = anon_sym_DOLLAR_BQUOTE;
	v->a[1782] = actions(1091);
	v->a[1783] = 1;
	v->a[1784] = aux_sym__simple_variable_name_token1;
	v->a[1785] = actions(1093);
	v->a[1786] = 1;
	v->a[1787] = sym_variable_name;
	v->a[1788] = actions(1095);
	v->a[1789] = 1;
	v->a[1790] = sym_test_operator;
	v->a[1791] = actions(1097);
	v->a[1792] = 1;
	v->a[1793] = sym__brace_start;
	v->a[1794] = state(1062);
	v->a[1795] = 1;
	v->a[1796] = aux_sym__literal_repeat1;
	v->a[1797] = actions(1069);
	v->a[1798] = 2;
	v->a[1799] = sym_raw_string;
	small_parse_table_90(v);
}

/* EOF small_parse_table_17.c */
