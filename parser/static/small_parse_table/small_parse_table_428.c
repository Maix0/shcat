/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_428.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2140(t_small_parse_table_array *v)
{
	v->a[42800] = sym_command_substitution;
	v->a[42801] = 7;
	v->a[42802] = actions(3);
	v->a[42803] = 1;
	v->a[42804] = sym_comment;
	v->a[42805] = actions(1457);
	v->a[42806] = 1;
	v->a[42807] = sym_file_descriptor;
	v->a[42808] = actions(1460);
	v->a[42809] = 1;
	v->a[42810] = sym_variable_name;
	v->a[42811] = actions(1537);
	v->a[42812] = 1;
	v->a[42813] = anon_sym_RPAREN;
	v->a[42814] = actions(1454);
	v->a[42815] = 7;
	v->a[42816] = anon_sym_LT;
	v->a[42817] = anon_sym_GT;
	v->a[42818] = anon_sym_GT_GT;
	v->a[42819] = anon_sym_LT_AMP;
	small_parse_table_2141(v);
}

void	small_parse_table_2141(t_small_parse_table_array *v)
{
	v->a[42820] = anon_sym_GT_AMP;
	v->a[42821] = anon_sym_GT_PIPE;
	v->a[42822] = anon_sym_LT_GT;
	v->a[42823] = actions(1449);
	v->a[42824] = 8;
	v->a[42825] = anon_sym_PIPE;
	v->a[42826] = anon_sym_SEMI_SEMI;
	v->a[42827] = anon_sym_AMP_AMP;
	v->a[42828] = anon_sym_PIPE_PIPE;
	v->a[42829] = anon_sym_LT_LT;
	v->a[42830] = anon_sym_LT_LT_DASH;
	v->a[42831] = aux_sym_heredoc_redirect_token1;
	v->a[42832] = anon_sym_SEMI;
	v->a[42833] = actions(1447);
	v->a[42834] = 9;
	v->a[42835] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42836] = anon_sym_DOLLAR;
	v->a[42837] = anon_sym_DQUOTE;
	v->a[42838] = sym_raw_string;
	v->a[42839] = sym_number;
	small_parse_table_2142(v);
}

void	small_parse_table_2142(t_small_parse_table_array *v)
{
	v->a[42840] = anon_sym_DOLLAR_LBRACE;
	v->a[42841] = anon_sym_DOLLAR_LPAREN;
	v->a[42842] = anon_sym_BQUOTE;
	v->a[42843] = sym_word;
	v->a[42844] = 6;
	v->a[42845] = actions(3);
	v->a[42846] = 1;
	v->a[42847] = sym_comment;
	v->a[42848] = actions(1243);
	v->a[42849] = 1;
	v->a[42850] = aux_sym_concatenation_token1;
	v->a[42851] = actions(1305);
	v->a[42852] = 1;
	v->a[42853] = sym__concat;
	v->a[42854] = state(765);
	v->a[42855] = 1;
	v->a[42856] = aux_sym_concatenation_repeat1;
	v->a[42857] = actions(1239);
	v->a[42858] = 2;
	v->a[42859] = sym_file_descriptor;
	small_parse_table_2143(v);
}

void	small_parse_table_2143(t_small_parse_table_array *v)
{
	v->a[42860] = sym__bare_dollar;
	v->a[42861] = actions(1235);
	v->a[42862] = 22;
	v->a[42863] = anon_sym_PIPE;
	v->a[42864] = anon_sym_AMP_AMP;
	v->a[42865] = anon_sym_PIPE_PIPE;
	v->a[42866] = anon_sym_LT;
	v->a[42867] = anon_sym_GT;
	v->a[42868] = anon_sym_GT_GT;
	v->a[42869] = anon_sym_LT_AMP;
	v->a[42870] = anon_sym_GT_AMP;
	v->a[42871] = anon_sym_GT_PIPE;
	v->a[42872] = anon_sym_LT_GT;
	v->a[42873] = anon_sym_LT_LT;
	v->a[42874] = anon_sym_LT_LT_DASH;
	v->a[42875] = aux_sym_heredoc_redirect_token1;
	v->a[42876] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42877] = anon_sym_DOLLAR;
	v->a[42878] = anon_sym_DQUOTE;
	v->a[42879] = sym_raw_string;
	small_parse_table_2144(v);
}

void	small_parse_table_2144(t_small_parse_table_array *v)
{
	v->a[42880] = sym_number;
	v->a[42881] = anon_sym_DOLLAR_LBRACE;
	v->a[42882] = anon_sym_DOLLAR_LPAREN;
	v->a[42883] = anon_sym_BQUOTE;
	v->a[42884] = sym_word;
	v->a[42885] = 3;
	v->a[42886] = actions(3);
	v->a[42887] = 1;
	v->a[42888] = sym_comment;
	v->a[42889] = actions(1233);
	v->a[42890] = 2;
	v->a[42891] = sym_file_descriptor;
	v->a[42892] = sym_variable_name;
	v->a[42893] = actions(1231);
	v->a[42894] = 25;
	v->a[42895] = anon_sym_for;
	v->a[42896] = anon_sym_while;
	v->a[42897] = anon_sym_until;
	v->a[42898] = anon_sym_do;
	v->a[42899] = anon_sym_if;
	small_parse_table_2145(v);
}

/* EOF small_parse_table_428.c */
