/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_959.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4795(t_small_parse_table_array *v)
{
	v->a[95900] = actions(4068);
	v->a[95901] = 1;
	v->a[95902] = anon_sym_DQUOTE;
	v->a[95903] = state(1987);
	v->a[95904] = 1;
	v->a[95905] = aux_sym_string_repeat1;
	v->a[95906] = state(2107);
	v->a[95907] = 4;
	v->a[95908] = sym_arithmetic_expansion;
	v->a[95909] = sym_simple_expansion;
	v->a[95910] = sym_expansion;
	v->a[95911] = sym_command_substitution;
	v->a[95912] = 4;
	v->a[95913] = actions(3);
	v->a[95914] = 1;
	v->a[95915] = sym_comment;
	v->a[95916] = actions(4072);
	v->a[95917] = 1;
	v->a[95918] = anon_sym_esac;
	v->a[95919] = actions(4074);
	small_parse_table_4796(v);
}

void	small_parse_table_4796(t_small_parse_table_array *v)
{
	v->a[95920] = 1;
	v->a[95921] = sym_extglob_pattern;
	v->a[95922] = actions(4070);
	v->a[95923] = 10;
	v->a[95924] = anon_sym_LPAREN;
	v->a[95925] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95926] = anon_sym_DOLLAR;
	v->a[95927] = anon_sym_DQUOTE;
	v->a[95928] = sym_raw_string;
	v->a[95929] = sym_number;
	v->a[95930] = anon_sym_DOLLAR_LBRACE;
	v->a[95931] = anon_sym_DOLLAR_LPAREN;
	v->a[95932] = anon_sym_BQUOTE;
	v->a[95933] = sym_word;
	v->a[95934] = 4;
	v->a[95935] = actions(3);
	v->a[95936] = 1;
	v->a[95937] = sym_comment;
	v->a[95938] = actions(4016);
	v->a[95939] = 1;
	small_parse_table_4797(v);
}

void	small_parse_table_4797(t_small_parse_table_array *v)
{
	v->a[95940] = anon_sym_esac;
	v->a[95941] = actions(4018);
	v->a[95942] = 1;
	v->a[95943] = sym_extglob_pattern;
	v->a[95944] = actions(4014);
	v->a[95945] = 10;
	v->a[95946] = anon_sym_LPAREN;
	v->a[95947] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95948] = anon_sym_DOLLAR;
	v->a[95949] = anon_sym_DQUOTE;
	v->a[95950] = sym_raw_string;
	v->a[95951] = sym_number;
	v->a[95952] = anon_sym_DOLLAR_LBRACE;
	v->a[95953] = anon_sym_DOLLAR_LPAREN;
	v->a[95954] = anon_sym_BQUOTE;
	v->a[95955] = sym_word;
	v->a[95956] = 4;
	v->a[95957] = actions(3);
	v->a[95958] = 1;
	v->a[95959] = sym_comment;
	small_parse_table_4798(v);
}

void	small_parse_table_4798(t_small_parse_table_array *v)
{
	v->a[95960] = actions(387);
	v->a[95961] = 1;
	v->a[95962] = sym_variable_name;
	v->a[95963] = actions(385);
	v->a[95964] = 2;
	v->a[95965] = aux_sym__simple_variable_name_token1;
	v->a[95966] = aux_sym__multiline_variable_name_token1;
	v->a[95967] = actions(383);
	v->a[95968] = 9;
	v->a[95969] = anon_sym_BANG;
	v->a[95970] = anon_sym_DASH;
	v->a[95971] = anon_sym_STAR;
	v->a[95972] = anon_sym_QMARK;
	v->a[95973] = anon_sym_DOLLAR;
	v->a[95974] = anon_sym_POUND;
	v->a[95975] = anon_sym_AT;
	v->a[95976] = anon_sym_0;
	v->a[95977] = anon_sym__;
	v->a[95978] = 10;
	v->a[95979] = actions(3);
	small_parse_table_4799(v);
}

void	small_parse_table_4799(t_small_parse_table_array *v)
{
	v->a[95980] = 1;
	v->a[95981] = sym_comment;
	v->a[95982] = actions(3856);
	v->a[95983] = 1;
	v->a[95984] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95985] = actions(3862);
	v->a[95986] = 1;
	v->a[95987] = sym_string_content;
	v->a[95988] = actions(3864);
	v->a[95989] = 1;
	v->a[95990] = anon_sym_DOLLAR_LBRACE;
	v->a[95991] = actions(3866);
	v->a[95992] = 1;
	v->a[95993] = anon_sym_DOLLAR_LPAREN;
	v->a[95994] = actions(3868);
	v->a[95995] = 1;
	v->a[95996] = anon_sym_BQUOTE;
	v->a[95997] = actions(4076);
	v->a[95998] = 1;
	v->a[95999] = anon_sym_DOLLAR;
	small_parse_table_4800(v);
}

/* EOF small_parse_table_959.c */
