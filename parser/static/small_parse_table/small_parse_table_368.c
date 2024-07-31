/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_368.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1840(t_small_parse_table_array *v)
{
	v->a[36800] = 1;
	v->a[36801] = sym_comment;
	v->a[36802] = actions(1249);
	v->a[36803] = 1;
	v->a[36804] = sym_variable_name;
	v->a[36805] = actions(1367);
	v->a[36806] = 1;
	v->a[36807] = ts_builtin_sym_end;
	v->a[36808] = actions(1245);
	v->a[36809] = 24;
	v->a[36810] = anon_sym_for;
	v->a[36811] = anon_sym_while;
	v->a[36812] = anon_sym_until;
	v->a[36813] = anon_sym_if;
	v->a[36814] = anon_sym_case;
	v->a[36815] = anon_sym_LPAREN;
	v->a[36816] = anon_sym_LBRACE;
	v->a[36817] = anon_sym_BANG;
	v->a[36818] = anon_sym_LT;
	v->a[36819] = anon_sym_GT;
	small_parse_table_1841(v);
}

void	small_parse_table_1841(t_small_parse_table_array *v)
{
	v->a[36820] = anon_sym_GT_GT;
	v->a[36821] = anon_sym_LT_AMP;
	v->a[36822] = anon_sym_GT_AMP;
	v->a[36823] = anon_sym_GT_PIPE;
	v->a[36824] = anon_sym_LT_GT;
	v->a[36825] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36826] = anon_sym_DOLLAR;
	v->a[36827] = anon_sym_DQUOTE;
	v->a[36828] = sym_raw_string;
	v->a[36829] = sym_number;
	v->a[36830] = anon_sym_DOLLAR_LBRACE;
	v->a[36831] = anon_sym_DOLLAR_LPAREN;
	v->a[36832] = anon_sym_BQUOTE;
	v->a[36833] = sym_word;
	v->a[36834] = 3;
	v->a[36835] = actions(3);
	v->a[36836] = 1;
	v->a[36837] = sym_comment;
	v->a[36838] = actions(975);
	v->a[36839] = 1;
	small_parse_table_1842(v);
}

void	small_parse_table_1842(t_small_parse_table_array *v)
{
	v->a[36840] = sym__bare_dollar;
	v->a[36841] = actions(967);
	v->a[36842] = 25;
	v->a[36843] = anon_sym_esac;
	v->a[36844] = anon_sym_PIPE;
	v->a[36845] = anon_sym_SEMI_SEMI;
	v->a[36846] = anon_sym_AMP_AMP;
	v->a[36847] = anon_sym_PIPE_PIPE;
	v->a[36848] = anon_sym_LT;
	v->a[36849] = anon_sym_GT;
	v->a[36850] = anon_sym_GT_GT;
	v->a[36851] = anon_sym_LT_AMP;
	v->a[36852] = anon_sym_GT_AMP;
	v->a[36853] = anon_sym_GT_PIPE;
	v->a[36854] = anon_sym_LT_GT;
	v->a[36855] = anon_sym_LT_LT;
	v->a[36856] = anon_sym_LT_LT_DASH;
	v->a[36857] = aux_sym_heredoc_redirect_token1;
	v->a[36858] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36859] = anon_sym_DOLLAR;
	small_parse_table_1843(v);
}

void	small_parse_table_1843(t_small_parse_table_array *v)
{
	v->a[36860] = anon_sym_DQUOTE;
	v->a[36861] = sym_raw_string;
	v->a[36862] = sym_number;
	v->a[36863] = anon_sym_DOLLAR_LBRACE;
	v->a[36864] = anon_sym_DOLLAR_LPAREN;
	v->a[36865] = anon_sym_BQUOTE;
	v->a[36866] = sym_word;
	v->a[36867] = anon_sym_SEMI;
	v->a[36868] = 5;
	v->a[36869] = actions(3);
	v->a[36870] = 1;
	v->a[36871] = sym_comment;
	v->a[36872] = actions(1289);
	v->a[36873] = 1;
	v->a[36874] = sym_variable_name;
	v->a[36875] = actions(1286);
	v->a[36876] = 7;
	v->a[36877] = anon_sym_LT;
	v->a[36878] = anon_sym_GT;
	v->a[36879] = anon_sym_GT_GT;
	small_parse_table_1844(v);
}

void	small_parse_table_1844(t_small_parse_table_array *v)
{
	v->a[36880] = anon_sym_LT_AMP;
	v->a[36881] = anon_sym_GT_AMP;
	v->a[36882] = anon_sym_GT_PIPE;
	v->a[36883] = anon_sym_LT_GT;
	v->a[36884] = actions(1279);
	v->a[36885] = 9;
	v->a[36886] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36887] = anon_sym_DOLLAR;
	v->a[36888] = anon_sym_DQUOTE;
	v->a[36889] = sym_raw_string;
	v->a[36890] = sym_number;
	v->a[36891] = anon_sym_DOLLAR_LBRACE;
	v->a[36892] = anon_sym_DOLLAR_LPAREN;
	v->a[36893] = anon_sym_BQUOTE;
	v->a[36894] = sym_word;
	v->a[36895] = actions(1281);
	v->a[36896] = 9;
	v->a[36897] = anon_sym_PIPE;
	v->a[36898] = anon_sym_RPAREN;
	v->a[36899] = anon_sym_SEMI_SEMI;
	small_parse_table_1845(v);
}

/* EOF small_parse_table_368.c */
