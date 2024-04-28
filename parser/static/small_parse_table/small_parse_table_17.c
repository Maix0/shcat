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
	v->a[1700] = actions(1561);
	v->a[1701] = 1;
	v->a[1702] = anon_sym_DOLLAR_LBRACE;
	v->a[1703] = actions(1563);
	v->a[1704] = 1;
	v->a[1705] = anon_sym_DOLLAR_LPAREN;
	v->a[1706] = actions(1567);
	v->a[1707] = 1;
	v->a[1708] = anon_sym_DOLLAR_BQUOTE;
	v->a[1709] = actions(1573);
	v->a[1710] = 1;
	v->a[1711] = sym__bare_dollar;
	v->a[1712] = actions(1575);
	v->a[1713] = 1;
	v->a[1714] = sym__brace_start;
	v->a[1715] = actions(1690);
	v->a[1716] = 1;
	v->a[1717] = anon_sym_LT_LT_LT;
	v->a[1718] = actions(1692);
	v->a[1719] = 1;
	small_parse_table_86(v);
}

void	small_parse_table_86(t_small_parse_table_array *v)
{
	v->a[1720] = sym__special_character;
	v->a[1721] = actions(1694);
	v->a[1722] = 1;
	v->a[1723] = sym_test_operator;
	v->a[1724] = state(587);
	v->a[1725] = 1;
	v->a[1726] = aux_sym_command_repeat2;
	v->a[1727] = state(1321);
	v->a[1728] = 1;
	v->a[1729] = aux_sym__literal_repeat1;
	v->a[1730] = state(1712);
	v->a[1731] = 1;
	v->a[1732] = sym_herestring_redirect;
	v->a[1733] = state(1716);
	v->a[1734] = 1;
	v->a[1735] = sym_concatenation;
	v->a[1736] = state(4952);
	v->a[1737] = 1;
	v->a[1738] = sym_subshell;
	v->a[1739] = actions(1442);
	small_parse_table_87(v);
}

void	small_parse_table_87(t_small_parse_table_array *v)
{
	v->a[1740] = 2;
	v->a[1741] = sym_file_descriptor;
	v->a[1742] = aux_sym_heredoc_redirect_token1;
	v->a[1743] = actions(1543);
	v->a[1744] = 2;
	v->a[1745] = anon_sym_LPAREN_LPAREN;
	v->a[1746] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1747] = actions(1569);
	v->a[1748] = 2;
	v->a[1749] = anon_sym_LT_LPAREN;
	v->a[1750] = anon_sym_GT_LPAREN;
	v->a[1751] = actions(1688);
	v->a[1752] = 2;
	v->a[1753] = anon_sym_EQ_EQ;
	v->a[1754] = anon_sym_EQ_TILDE;
	v->a[1755] = actions(1686);
	v->a[1756] = 3;
	v->a[1757] = sym_raw_string;
	v->a[1758] = sym_ansi_c_string;
	v->a[1759] = sym_word;
	small_parse_table_88(v);
}

void	small_parse_table_88(t_small_parse_table_array *v)
{
	v->a[1760] = state(1219);
	v->a[1761] = 9;
	v->a[1762] = sym_arithmetic_expansion;
	v->a[1763] = sym_brace_expression;
	v->a[1764] = sym_string;
	v->a[1765] = sym_translated_string;
	v->a[1766] = sym_number;
	v->a[1767] = sym_simple_expansion;
	v->a[1768] = sym_expansion;
	v->a[1769] = sym_command_substitution;
	v->a[1770] = sym_process_substitution;
	v->a[1771] = actions(1440);
	v->a[1772] = 20;
	v->a[1773] = anon_sym_SEMI;
	v->a[1774] = anon_sym_PIPE_PIPE;
	v->a[1775] = anon_sym_AMP_AMP;
	v->a[1776] = anon_sym_PIPE;
	v->a[1777] = anon_sym_AMP;
	v->a[1778] = anon_sym_LT;
	v->a[1779] = anon_sym_GT;
	small_parse_table_89(v);
}

void	small_parse_table_89(t_small_parse_table_array *v)
{
	v->a[1780] = anon_sym_LT_LT;
	v->a[1781] = anon_sym_GT_GT;
	v->a[1782] = anon_sym_SEMI_SEMI;
	v->a[1783] = anon_sym_PIPE_AMP;
	v->a[1784] = anon_sym_AMP_GT;
	v->a[1785] = anon_sym_AMP_GT_GT;
	v->a[1786] = anon_sym_LT_AMP;
	v->a[1787] = anon_sym_GT_AMP;
	v->a[1788] = anon_sym_GT_PIPE;
	v->a[1789] = anon_sym_LT_AMP_DASH;
	v->a[1790] = anon_sym_GT_AMP_DASH;
	v->a[1791] = anon_sym_LT_LT_DASH;
	v->a[1792] = anon_sym_BQUOTE;
	v->a[1793] = 28;
	v->a[1794] = actions(3);
	v->a[1795] = 1;
	v->a[1796] = sym_comment;
	v->a[1797] = actions(19);
	v->a[1798] = 1;
	v->a[1799] = anon_sym_LPAREN;
	small_parse_table_90(v);
}

/* EOF small_parse_table_17.c */
