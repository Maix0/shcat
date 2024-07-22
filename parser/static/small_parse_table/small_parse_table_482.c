/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_482.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2410(t_small_parse_table_array *v)
{
	v->a[48200] = actions(1724);
	v->a[48201] = 1;
	v->a[48202] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48203] = actions(1726);
	v->a[48204] = 1;
	v->a[48205] = anon_sym_DOLLAR;
	v->a[48206] = actions(1728);
	v->a[48207] = 1;
	v->a[48208] = anon_sym_DQUOTE;
	v->a[48209] = actions(1730);
	v->a[48210] = 1;
	v->a[48211] = anon_sym_DOLLAR_LBRACE;
	v->a[48212] = actions(1732);
	v->a[48213] = 1;
	v->a[48214] = anon_sym_DOLLAR_LPAREN;
	v->a[48215] = actions(1734);
	v->a[48216] = 1;
	v->a[48217] = anon_sym_BQUOTE;
	v->a[48218] = actions(1736);
	v->a[48219] = 1;
	small_parse_table_2411(v);
}

void	small_parse_table_2411(t_small_parse_table_array *v)
{
	v->a[48220] = sym_extglob_pattern;
	v->a[48221] = actions(1764);
	v->a[48222] = 1;
	v->a[48223] = anon_sym_esac;
	v->a[48224] = state(915);
	v->a[48225] = 1;
	v->a[48226] = sym_terminator;
	v->a[48227] = state(1019);
	v->a[48228] = 1;
	v->a[48229] = aux_sym_case_statement_repeat1;
	v->a[48230] = state(1682);
	v->a[48231] = 1;
	v->a[48232] = sym_case_item;
	v->a[48233] = state(2107);
	v->a[48234] = 1;
	v->a[48235] = sym__case_item_last;
	v->a[48236] = state(1877);
	v->a[48237] = 2;
	v->a[48238] = sym_concatenation;
	v->a[48239] = sym__extglob_blob;
	small_parse_table_2412(v);
}

void	small_parse_table_2412(t_small_parse_table_array *v)
{
	v->a[48240] = actions(1716);
	v->a[48241] = 3;
	v->a[48242] = sym_raw_string;
	v->a[48243] = sym_number;
	v->a[48244] = sym_word;
	v->a[48245] = actions(1722);
	v->a[48246] = 3;
	v->a[48247] = anon_sym_SEMI_SEMI;
	v->a[48248] = aux_sym_heredoc_redirect_token1;
	v->a[48249] = anon_sym_SEMI;
	v->a[48250] = state(1772);
	v->a[48251] = 5;
	v->a[48252] = sym_arithmetic_expansion;
	v->a[48253] = sym_string;
	v->a[48254] = sym_simple_expansion;
	v->a[48255] = sym_expansion;
	v->a[48256] = sym_command_substitution;
	v->a[48257] = 18;
	v->a[48258] = actions(3);
	v->a[48259] = 1;
	small_parse_table_2413(v);
}

void	small_parse_table_2413(t_small_parse_table_array *v)
{
	v->a[48260] = sym_comment;
	v->a[48261] = actions(1720);
	v->a[48262] = 1;
	v->a[48263] = anon_sym_LPAREN;
	v->a[48264] = actions(1724);
	v->a[48265] = 1;
	v->a[48266] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48267] = actions(1726);
	v->a[48268] = 1;
	v->a[48269] = anon_sym_DOLLAR;
	v->a[48270] = actions(1728);
	v->a[48271] = 1;
	v->a[48272] = anon_sym_DQUOTE;
	v->a[48273] = actions(1730);
	v->a[48274] = 1;
	v->a[48275] = anon_sym_DOLLAR_LBRACE;
	v->a[48276] = actions(1732);
	v->a[48277] = 1;
	v->a[48278] = anon_sym_DOLLAR_LPAREN;
	v->a[48279] = actions(1734);
	small_parse_table_2414(v);
}

void	small_parse_table_2414(t_small_parse_table_array *v)
{
	v->a[48280] = 1;
	v->a[48281] = anon_sym_BQUOTE;
	v->a[48282] = actions(1736);
	v->a[48283] = 1;
	v->a[48284] = sym_extglob_pattern;
	v->a[48285] = actions(1766);
	v->a[48286] = 1;
	v->a[48287] = anon_sym_esac;
	v->a[48288] = state(929);
	v->a[48289] = 1;
	v->a[48290] = sym_terminator;
	v->a[48291] = state(1016);
	v->a[48292] = 1;
	v->a[48293] = aux_sym_case_statement_repeat1;
	v->a[48294] = state(1682);
	v->a[48295] = 1;
	v->a[48296] = sym_case_item;
	v->a[48297] = state(2128);
	v->a[48298] = 1;
	v->a[48299] = sym__case_item_last;
	small_parse_table_2415(v);
}

/* EOF small_parse_table_482.c */
