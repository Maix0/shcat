/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_678.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3390(t_small_parse_table_array *v)
{
	v->a[67800] = 1;
	v->a[67801] = anon_sym_DOLLAR_LBRACE;
	v->a[67802] = actions(1020);
	v->a[67803] = 1;
	v->a[67804] = anon_sym_DOLLAR_LPAREN;
	v->a[67805] = actions(1022);
	v->a[67806] = 1;
	v->a[67807] = anon_sym_BQUOTE;
	v->a[67808] = actions(2705);
	v->a[67809] = 1;
	v->a[67810] = aux_sym_heredoc_redirect_token1;
	v->a[67811] = state(1250);
	v->a[67812] = 1;
	v->a[67813] = aux_sym__heredoc_command;
	v->a[67814] = state(1722);
	v->a[67815] = 1;
	v->a[67816] = sym_concatenation;
	v->a[67817] = actions(1002);
	v->a[67818] = 3;
	v->a[67819] = sym_raw_string;
	small_parse_table_3391(v);
}

void	small_parse_table_3391(t_small_parse_table_array *v)
{
	v->a[67820] = sym_number;
	v->a[67821] = sym_word;
	v->a[67822] = state(1516);
	v->a[67823] = 5;
	v->a[67824] = sym_arithmetic_expansion;
	v->a[67825] = sym_string;
	v->a[67826] = sym_simple_expansion;
	v->a[67827] = sym_expansion;
	v->a[67828] = sym_command_substitution;
	v->a[67829] = 3;
	v->a[67830] = actions(3);
	v->a[67831] = 1;
	v->a[67832] = sym_comment;
	v->a[67833] = actions(2149);
	v->a[67834] = 2;
	v->a[67835] = sym_file_descriptor;
	v->a[67836] = aux_sym_heredoc_redirect_token1;
	v->a[67837] = actions(2151);
	v->a[67838] = 15;
	v->a[67839] = anon_sym_esac;
	small_parse_table_3392(v);
}

void	small_parse_table_3392(t_small_parse_table_array *v)
{
	v->a[67840] = anon_sym_PIPE;
	v->a[67841] = anon_sym_SEMI_SEMI;
	v->a[67842] = anon_sym_AMP_AMP;
	v->a[67843] = anon_sym_PIPE_PIPE;
	v->a[67844] = anon_sym_LT;
	v->a[67845] = anon_sym_GT;
	v->a[67846] = anon_sym_GT_GT;
	v->a[67847] = anon_sym_LT_AMP;
	v->a[67848] = anon_sym_GT_AMP;
	v->a[67849] = anon_sym_GT_PIPE;
	v->a[67850] = anon_sym_LT_GT;
	v->a[67851] = anon_sym_LT_LT;
	v->a[67852] = anon_sym_LT_LT_DASH;
	v->a[67853] = anon_sym_SEMI;
	v->a[67854] = 10;
	v->a[67855] = actions(3);
	v->a[67856] = 1;
	v->a[67857] = sym_comment;
	v->a[67858] = actions(2399);
	v->a[67859] = 1;
	small_parse_table_3393(v);
}

void	small_parse_table_3393(t_small_parse_table_array *v)
{
	v->a[67860] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67861] = actions(2403);
	v->a[67862] = 1;
	v->a[67863] = anon_sym_DQUOTE;
	v->a[67864] = actions(2405);
	v->a[67865] = 1;
	v->a[67866] = anon_sym_DOLLAR_LBRACE;
	v->a[67867] = actions(2407);
	v->a[67868] = 1;
	v->a[67869] = anon_sym_DOLLAR_LPAREN;
	v->a[67870] = actions(2409);
	v->a[67871] = 1;
	v->a[67872] = anon_sym_BQUOTE;
	v->a[67873] = actions(2411);
	v->a[67874] = 1;
	v->a[67875] = sym__bare_dollar;
	v->a[67876] = actions(2707);
	v->a[67877] = 1;
	v->a[67878] = anon_sym_DOLLAR;
	v->a[67879] = actions(2397);
	small_parse_table_3394(v);
}

void	small_parse_table_3394(t_small_parse_table_array *v)
{
	v->a[67880] = 5;
	v->a[67881] = aux_sym_concatenation_token1;
	v->a[67882] = sym_raw_string;
	v->a[67883] = sym_number;
	v->a[67884] = sym__comment_word;
	v->a[67885] = sym_word;
	v->a[67886] = state(856);
	v->a[67887] = 5;
	v->a[67888] = sym_arithmetic_expansion;
	v->a[67889] = sym_string;
	v->a[67890] = sym_simple_expansion;
	v->a[67891] = sym_expansion;
	v->a[67892] = sym_command_substitution;
	v->a[67893] = 10;
	v->a[67894] = actions(3);
	v->a[67895] = 1;
	v->a[67896] = sym_comment;
	v->a[67897] = actions(405);
	v->a[67898] = 1;
	v->a[67899] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3395(v);
}

/* EOF small_parse_table_678.c */
