/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1359.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6795(t_small_parse_table_array *v)
{
	v->a[135900] = actions(7884);
	v->a[135901] = 1;
	v->a[135902] = anon_sym_RBRACE3;
	v->a[135903] = state(3754);
	v->a[135904] = 1;
	v->a[135905] = sym__expansion_body;
	v->a[135906] = actions(7756);
	v->a[135907] = 2;
	v->a[135908] = anon_sym_0;
	v->a[135909] = anon_sym__;
	v->a[135910] = actions(7750);
	v->a[135911] = 7;
	v->a[135912] = anon_sym_BANG;
	v->a[135913] = anon_sym_DASH;
	v->a[135914] = anon_sym_STAR;
	v->a[135915] = anon_sym_QMARK;
	v->a[135916] = anon_sym_DOLLAR;
	v->a[135917] = anon_sym_POUND;
	v->a[135918] = anon_sym_AT;
	v->a[135919] = 7;
	small_parse_table_6796(v);
}

void	small_parse_table_6796(t_small_parse_table_array *v)
{
	v->a[135920] = actions(3);
	v->a[135921] = 1;
	v->a[135922] = sym_comment;
	v->a[135923] = actions(7754);
	v->a[135924] = 1;
	v->a[135925] = aux_sym__simple_variable_name_token1;
	v->a[135926] = actions(7758);
	v->a[135927] = 1;
	v->a[135928] = sym_variable_name;
	v->a[135929] = actions(7886);
	v->a[135930] = 1;
	v->a[135931] = anon_sym_RBRACE3;
	v->a[135932] = state(3904);
	v->a[135933] = 1;
	v->a[135934] = sym__expansion_body;
	v->a[135935] = actions(7756);
	v->a[135936] = 2;
	v->a[135937] = anon_sym_0;
	v->a[135938] = anon_sym__;
	v->a[135939] = actions(7750);
	small_parse_table_6797(v);
}

void	small_parse_table_6797(t_small_parse_table_array *v)
{
	v->a[135940] = 7;
	v->a[135941] = anon_sym_BANG;
	v->a[135942] = anon_sym_DASH;
	v->a[135943] = anon_sym_STAR;
	v->a[135944] = anon_sym_QMARK;
	v->a[135945] = anon_sym_DOLLAR;
	v->a[135946] = anon_sym_POUND;
	v->a[135947] = anon_sym_AT;
	v->a[135948] = 11;
	v->a[135949] = actions(3);
	v->a[135950] = 1;
	v->a[135951] = sym_comment;
	v->a[135952] = actions(7760);
	v->a[135953] = 1;
	v->a[135954] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135955] = actions(7766);
	v->a[135956] = 1;
	v->a[135957] = sym_string_content;
	v->a[135958] = actions(7768);
	v->a[135959] = 1;
	small_parse_table_6798(v);
}

void	small_parse_table_6798(t_small_parse_table_array *v)
{
	v->a[135960] = anon_sym_DOLLAR_LBRACE;
	v->a[135961] = actions(7770);
	v->a[135962] = 1;
	v->a[135963] = anon_sym_DOLLAR_LPAREN;
	v->a[135964] = actions(7772);
	v->a[135965] = 1;
	v->a[135966] = anon_sym_BQUOTE;
	v->a[135967] = actions(7774);
	v->a[135968] = 1;
	v->a[135969] = anon_sym_DOLLAR_BQUOTE;
	v->a[135970] = actions(7888);
	v->a[135971] = 1;
	v->a[135972] = anon_sym_DOLLAR;
	v->a[135973] = actions(7890);
	v->a[135974] = 1;
	v->a[135975] = anon_sym_DQUOTE;
	v->a[135976] = state(3027);
	v->a[135977] = 1;
	v->a[135978] = aux_sym_string_repeat1;
	v->a[135979] = state(3218);
	small_parse_table_6799(v);
}

void	small_parse_table_6799(t_small_parse_table_array *v)
{
	v->a[135980] = 4;
	v->a[135981] = sym_arithmetic_expansion;
	v->a[135982] = sym_simple_expansion;
	v->a[135983] = sym_expansion;
	v->a[135984] = sym_command_substitution;
	v->a[135985] = 11;
	v->a[135986] = actions(3);
	v->a[135987] = 1;
	v->a[135988] = sym_comment;
	v->a[135989] = actions(7760);
	v->a[135990] = 1;
	v->a[135991] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135992] = actions(7766);
	v->a[135993] = 1;
	v->a[135994] = sym_string_content;
	v->a[135995] = actions(7768);
	v->a[135996] = 1;
	v->a[135997] = anon_sym_DOLLAR_LBRACE;
	v->a[135998] = actions(7770);
	v->a[135999] = 1;
	small_parse_table_6800(v);
}

/* EOF small_parse_table_1359.c */
